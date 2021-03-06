<?php

/**
 * @file node.tpl.php
 *
 * Theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: Node body or teaser depending on $teaser flag.
 * - $picture: The authors picture of the node output from
 *   theme_user_picture().
 * - $date: Formatted creation date (use $created to reformat with
 *   format_date()).
 * - $links: Themed links like "Read more", "Add new comment", etc. output
 *   from theme_links().
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct url of the current node.
 * - $terms: the themed list of taxonomy term links output from theme_links().
 * - $submitted: themed submission information output from
 *   theme_node_submitted().
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type, i.e. story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $teaser: Flag for the teaser state.
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 */
?>
<div class="customer-info clear-block">
<div class ="info_top">
    <div class="row-fluid">
        <div class="one-fifth">
          <?php
            $user_image = 'sites/default/files/noavatar.jpg';
  
            if (isset($node->field_anhdaidien[0]['filepath']) && file_exists($node->field_anhdaidien[0]['filepath'])) {
              $user_image = $node->field_anhdaidien[0]['filepath'];
            }

            echo theme('image', $user_image);
          ?> 
        </div>
        <div class="four-fifth last">
            <div class="clearfix">
<?php
$ns =$node->field_ngaysinh[0]['value'];
if($ns == 0) {
  $nskh = '-';
  $nsinfo = '- ';
}
else{
  $nskh = $ns;
  $nsinfo = date('d/m/Y',$node->field_ngaysinh[0]['value']);
}
?>
            </div>
            <div class="clearfix short-detail left_kh_info">
              <div class="row">
                <div class="field-label">Họ & Tên <span class="spac">:</span></div>
                <div class="field-items"><?php  $tapkhachhang = '';
                  if ($node->field_tapkhachhang[0]['value']) {
                    $tapkhachhang = 'VIP';
                  }
                  echo $node->field_hovaten[0]['value'];?> <?php echo dpldev_text_view($tapkhachhang, array('prefix'=>'- <span>' . t('Khách', array(), 'vi') . ' ', 'suffix' => '</span>', 'output'=>''))?>
                </div>
              </div>
              <?php if(isset($node->field_mathe[0]['value'])) :?>
              <div class="row">
                <div class="field-label">Hạng <span class="spac">:</span></div>
                <div class="field-items"><?php echo dpldev_khachhang_tapkh($node->field_hangthe[0]['value'])?>
                </div>
              </div>
              <?php endif;?>
                <div class="row">
                    <div class="field-label">Giới tính <span class="spac">:</span></div>
                    <div class="field-items"><?php echo dpldev_text_view($node->field_gioitinh[0]['value'])?>
                    </div>
                </div>
                <div class="row">
                    <div class="field-label">Ngày sinh <span class="spac">:</span></div>
                    <div class="field-items">
                        <span class="date-display-single"><?php echo $nsinfo?></span>
                    </div>
                </div>
                <div class="row">
                    <div class="field-mobile">
                        <div class="field-label">Số điện thoại <span class="spac">:</span></div>
                        <?php echo dpldev_text_view($node->field_mobile[0]['value'], array('prefix'=>'<div class="field-items">', 'suffix'=>'</div>'))?>
                    </div>
                </div>
                <div class="row">
                    <div class="field-email">
                        <div class="field-label">Email <span class="spac">:</span></div>
                        <?php echo dpldev_text_view($node->field_email[0]['email'], array('prefix'=>'<div class="field-items">', 'suffix'=>'</div>'))?>
                    </div>
                </div>
              <div class="row">
                <div class="field-label">Địa chỉ <span class="spac">:</span></div>
                <div class="field-items"><?php echo $node ->field_diachi[0]['view'] ?>
                </div>
              </div>
            </div>
 <?php if(isset($node->field_mathe[0]['value'])) :?>
          <div class ="right_kh_info short-detail">
            <div class="row">
              <div class="field-label">Hạng <span class="spac">:</span></div>
              <div class="field-items"><?php echo dpldev_khachhang_tapkh($node->field_hangthe[0]['value'])?></div>
            </div>
            <div class="row">
              <div class="field-label">Người phát hành <span class="spac">:</span></div>
              <div class="field-items"><?php echo $node->field_person[0]['value']?></div>
            </div>
            <div class="row">
              <div class="field-label">Mã thẻ <span class="spac">:</span></div>
              <div class="field-items"><?php echo $node->field_mathe[0]['value']?></div>
            </div>
            <div class="row">
              <div class="field-label">Ngày cấp <span class="spac">:</span></div>
              <div class="field-items"><?php echo $node->field_ngaycap[0]['value']?></div>
            </div>
            <div class="row">
              <div class="field-label">Thời hạn <span class="spac">:</span></div>
              <div class="field-items"><?php echo $node->field_thoihan[0]['value']?></div>
            </div>
          </div>
        </div>
      <?php endif; ?>
    </div>
</div>
    <div class="more-info">
        <h2>Thông tin liên hệ</h2>

      <?php  $info = dpldev_khachhang_info_khachhang();?>
      <?php if(!is_array($info)) :?>
        <div class="row-fluid">
          <div class="left_kh">
              <div class="field-label row">Họ Và Tên  :</div>
              <div class="field-items row">  <?php echo $node->field_hovaten[0]['value'] ?> </div>
              <div class="field-label row">Ngày sinh  :</div>
            <?php $ns = $node->field_ngaysinh[0]['value']?>
              <div class="field-items row">  <?php echo $nsinfo?></div>


          </div>
          <div class="right_kh">

              <div class="field-label row">Điện thoại :</div>
              <div class="field-items row"> <?php echo $node -> field_mobile[0]['value'];?>  </div>
              <div class="field-label row">Địa chỉ :</div>
            <div class="field-items row"> <?php echo $node -> field_diachi[0]['value']?>  </div>


          </div>

        </div>
      <?php  endif;?>
      <?php if(is_array($info)) :?>
        <input type="button" value="Hủy group" id ="huy_kh" name="<?php echo $node->nid?>">
      <?php

         foreach($info as $info_kh) {
           $name = $info_kh['name'];
           $names[] = $name;
           $email = $info_kh['email'];
           $emails[] = $email;
           $phone = $info_kh['phone'];
           $phones[] = $phone;
           $gen = $info_kh['gen'];
           $gens[] = $gen;
           $address = $info_kh['address'];
           $addressAl[] = $address;
           $birthday = $info_kh['birthday'];
           $birthdays[] = $birthday;
         }
      ?>
     <div class="row-fluid">
        <div class="left_kh">
          <?php foreach($names as $k => $hoten) :?>

            <div class="field-label row">Họ Và Tên <?php echo $k+1?> :</div>
            <div class="field-items row">  <?php echo $hoten?> </div>
          <?php endforeach; ?>
          <?php foreach($birthdays as $k => $ngaysinh) :?>
            <div class="field-label row">Ngày sinh <?php echo $k+1?> :</div>
            <div class="field-items row">  <?php echo $ngaysinh=='-'?'-':date('d/m/Y',$ngaysinh)?> </div>
          <?php endforeach; ?>
         </div>
       <div class="right_kh">
         <?php foreach($phones as $k => $dienthoai) :?>
           <div class="field-label row">Điện thoại <?php echo $k+1?> :</div>
           <div class="field-items row">  <?php echo $dienthoai?> </div>
         <?php endforeach; ?>
         <?php foreach($addressAl as $k => $diachi) :?>
           <div class="field-label row">Địa chỉ <?php echo $k+1?> :</div>
           <div class="field-items row">  <?php echo $diachi?> </div>
         <?php endforeach; ?>
       </div>

     </div>
<?php endif; ?>
      <!--
        <div class="row-fluid">
            <?php
            $inputArray = array (
                array(
                    'label' => t('Mã khách hàng', array(), 'vi'),
                    'value' => dpldev_text_view($node->field_makh[0]['value']),
                ),
                array(
                    'label' => t('Tên', array(), 'vi'),
                    'value' => dpldev_text_view($node->field_ten[0]['value']),
                ),
                array(
                    'label' => t('Họ và đệm', array(), 'vi'),
                    'value' => dpldev_text_view($node->field_hovadem[0]['value']),
                ),
                array(
                    'label' => t('Công ty', array(), 'vi'),
                    'value' => dpldev_text_view($node->field_congty[0]['value']),
                ),
                array(
                    'label' => t('Điện thoại di động', array(), 'vi'),
                    'value' => dpldev_text_view($node->field_mobile[0]['value']),
                ),
                array(
                    'label' => t('Email', array(), 'vi'),
                    'value' => dpldev_text_view($node->field_email[0]['email']),
                ),
                array(
                    'label' => t('Điện thoại cố định', array(), 'vi'),
                    'value' => dpldev_text_view($node->field_phone[0]['value']),
                ),
                array(
                    'label' => t('Yahoo', array(), 'vi'),
                    'value' => dpldev_text_view($node->field_yahoo[0]['value']),
                ),
            );
            echo dpldev_khachhang_content_view_ifno($inputArray);
            ?>

        </div>
        //-->
<?php if(isset($node->field_mathe[0]['value'])) :?>
        <h2>Thông tin quản lý DEC</h2>
        <div class="row-fluid">
            <?php
            $inputArray = array (
            array(
                'label' => t('Hạng thẻ', array(), 'vi'),
                'value' => dpldev_text_view($node->field_hangthe[0]['value']),
            ),
            array(
                'label' => t('Số thẻ', array(), 'vi'),
                'value' => dpldev_text_view($node->field_sothe[0]['value']),
            ),
            array(
                'label' => t('Người phát hành', array(), 'vi'),
                'value' => dpldev_text_view($node->field_person[0]['value']),
            ),
            array(
                'label' => t('Mã thẻ', array(), 'vi'),
                'value' => dpldev_text_view($node->field_mathe[0]['value']),
            ),
            array(
                'label' => t('Loại khách', array(), 'vi'),
                'value' => dpldev_text_view($node->field_type_kh[0]['value']),
            ),
            array(
                'label' => t('Ngày cấp', array(), 'vi'),
                'value' => dpldev_text_view($node->field_ngaycap[0]['value']),
            ),
            array(
                'label' => t('Mã cố định', array(), 'vi'),
                'value' => dpldev_text_view($node->field_macodinh[0]['value']),
            ),
            array(
                'label' => t('Thời hạn', array(), 'vi'),
                'value' => dpldev_text_view($node->field_thoihan[0]['value']),
            ),
            );
            echo dpldev_khachhang_content_view_ifno($inputArray);
            ?>
        </div>
<?php endif; ?>
        <h2>Thông tin khác</h2>
        <div class="row-fluid">
            <?php
            $inputArray = array (
            array(
                'label' => 'Thu nhập',
                'value' => '10-12',
            ),
            array(
                'label' => 'Ngày sinh',
                'value' => dpldev_text_view($nsinfo),
            ),
            array(
                'label' => 'Học vấn',
                'value' => dpldev_text_view($node->field_hocvan[0]['value']),
            ),
           array(
                'label' => 'Công ty',
                'value' => dpldev_text_view($node->field_congty[0]['value']),
             ),
              array(
                'label' => 'Hôn nhân',
                'value' => dpldev_text_view($node->field_honnhan[0]['value']),
              ),
              array(
                'label' => 'Chức danh',
                'value' => dpldev_text_view($node->field_chucdanh[0]['value']),
              ),
            array(
                'label' => 'Ngày cưới',
                'value' => dpldev_text_view($node->field_ngaycuoi[0]['value']),
            ),
            );
            echo dpldev_khachhang_content_view_ifno($inputArray);
            ?>
        </div>

    </div>
</div>
<div class="show_hide">
  <div class="more_ct">Chi Tiết</div>
  <div class="more_tg">Thu gọn</div>
</div>
