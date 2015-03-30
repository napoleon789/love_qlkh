<?php
$display_iframe_event = theme_get_option('homepage', 'display_iframe_event');
?>

<?php if (theme_get_option('footer','display_twitter')) : ?>
    <div id="twitter-bar">
		<script type="text/javascript">
        jQuery(document).ready(function(){
            jQuery("#twitter").tweet({
                username: "<?php echo theme_get_option('footer','twitter_username'); ?>",
                count: <?php echo theme_get_option('footer','twitter_count'); ?>,
                join_text: "auto",
                loading_text: "<?php _e('Loading tweets...','nos');?>",
                seconds_ago_text: '<?php _e('about %d seconds ago','nos');?>',
                a_minutes_ago_text: '<?php _e('about a minute ago','nos');?>',
                minutes_ago_text: '<?php _e('about %d minutes ago','nos');?>',
                a_hours_ago_text: '<?php _e('about an hour ago','nos');?>',
                hours_ago_text: '<?php _e('about %d hours ago','nos');?>',
                a_day_ago_text: '<?php _e('about a day ago','nos');?>',
                days_ago_text: '<?php _e('about %d days ago','nos');?>',
                auto_join_text_default: '<?php _e('i said,','nos');?>',
                auto_join_text_ed: '<?php _e('i','nos');?>',
                auto_join_text_ing: '<?php _e('i am','nos');?>',
                auto_join_text_reply: '<?php _e('i replied to','nos');?>',
                auto_join_text_url: '<?php _e('i was looking at','nos');?>'
            }).bind("loaded",function(){
				jQuery('#twitter .tweet_list').carouFredSel({
					auto: {
						pauseOnHover: true,
						play: true,
						pauseDuration: 4000,
						fx: "fade"
					}
				});
			});
        });
        </script>
        <div class="inner">
            <div class="twitter-icon"></div>
            <div id="twitter"></div>
        </div>
    </div>
    <!-- / twitter-bar -->
    <?php endif; ?>
    
    <div id="footer">
        <div class="background">
        <?php if (theme_get_option('footer','display_footer')) : ?>
            <div class="inner">
			<?php
        	$footer_layout = theme_get_option('footer','footer_layout');
            switch ($footer_layout ) {
            case 2:
                ?>
                <div class="one-half"><?php dynamic_sidebar('first-footer-widget-area'); ?></div>
                <div class="one-half last"><?php dynamic_sidebar('second-footer-widget-area'); ?></div>
                <?php
                break;
            case 3:
                ?>
                <div class="one-third"><?php dynamic_sidebar('first-footer-widget-area'); ?></div>
                <div class="one-third"><?php dynamic_sidebar('second-footer-widget-area'); ?></div>
                <div class="one-third last"><?php dynamic_sidebar('third-footer-widget-area'); ?></div>
                <?php
                break;
            case 4:
                ?>
                <div class="one-fourth"  id="one-half-one">
                  <?php if(is_front_page() ) { ?>
                    <?php 
                    //$section = file_get_contents('http://public.tpb.vn/doji/jsonccy.aspx');
                    $section = '';
                    $arr = json_decode($section);

                    ?>
                    <div class="tygia-ngoaite-common">
                      <div>
                        <img src="<?php echo bloginfo('template_url'); ?>/images/logo_tpb.jpg"/>
                      </div>
                      <div class="right-box">
                        <div class="clear-block">
                          <div class="kimcuong-external">
                            <h3>
                              <span id="Cours1_lblLabel_GoldPrice">Tỷ giá ngoại tệ</span>
                              <span id="link-ext"><i><a href="https://tpb.vn/ty-gia/" target="_bank">Chi tiết</a></i></span>
                            </h3>
                            <div id="div-tygia-ngoaite">
                              <table width="100%" id="tygia-ngoaite" class="goldprice-view sticky-enabled laisuat"> 
                               <thead>
                                 <tr>
                                   <th class="">Mã</th>
                                   <th>Mua TM</th>
                                   <th>Mua CK</th>
                                   <th>Bán ra</th>
                                 </tr>
                               </thead>        

                                 <?php
                               echo "<tbody>";
                               foreach($arr->ccy as $ccy){
                                 echo "<tr>";
                                 echo "<td>";
                                 echo "$ccy->mangoaite";
                                 echo "</td>";
                                 echo "<td>";
                                 echo "$ccy->muatienmat";
                                 echo "</td>";
                                 echo "<td>";
                                 echo "$ccy->muachuyenkhoan";
                                 echo "</td>";
                                 echo "<td>";
                                 echo "$ccy->banra";
                                 echo "</td>";
                                 echo "</tr>";
                               }
                               echo "</tbody>";
                               echo "</table>";
                               ?>
                              </div>
                            </div>
                        </div>
                      </div>
                    </div>
                  <?php } ?>
                  <?php dynamic_sidebar('first-footer-widget-area'); ?>
                </div>
                
                <div class="one-fourth"  id="one-half-two">
                  
                  <?php if(is_front_page() ) { ?>
                    <?php 
                    //$section = file_get_contents('http://public.tpb.vn/doji/jsontk.aspx');
                    $section = '';
                    $arr = json_decode($section);
                    $tkthuonglaicuoiky = $arr->tpb[0]->tkthuonglaicuoiky;
                    $tkthuonglaidinhky = $arr->tpb[1]->tkthuonglaidinhky;
                    $tkdientu = $arr->tpb[2]->tkdientu;
                    ?>
                    <div class="laisuat-tietkiem-common">
                      <div>
                        <img src="<?php echo bloginfo('template_url'); ?>/images/logo_tpb.jpg"/>
                      </div>
                      <div class="right-box">
                        <div class="clear-block">
                          <div class="laisuat-tietkiem-external">

                            <h3>
                              <span id="Cours1_lblLabel_GoldPrice">Lãi suất tiết kiệm</span>
                              <span id="link-ext"><i><a href="https://tpb.vn/lai-suat-tiet-kiem/" target="_bank">Chi tiết</a></i></span>
                            </h3>

                           <table width="100%" class="goldprice-view sticky-enabled laisuattietkiem"> 
                            <thead>
                              <tr class="first">
                                <th class="first" colspan="3">

                                  <select id="laisuat-tpb" name="laisuat-tpb">
                                    <option value="tkthuonglaicuoiky">TK thưởng lãi cuối kỳ</option>
                                    <option value="tkthuonglaidinhky">TK thưởng lãi định kỳ</option>
                                    <option value="tkdientu">TK điện tử</option>
                                  </select>
                                </th>
                              </tr>
                              <tr><th class="first">Kỳ hạn</th><th>VND</th><th>USD</th> </tr>
                            </thead>      

                            <?php
                            // Lãi suất cuối kỳ
                            echo "<tbody id='tkthuonglaicuoiky' class='laisuattietkiem-tbody tkthuonglaicuoiky'>";
                            foreach($tkthuonglaicuoiky as $ccy){
                                echo "<tr>";
                                echo "<td class='first'>";
                                echo "$ccy->tenor";
                                echo "</td>";
                                echo "<td>";
                                echo "$ccy->vnd";
                                echo "</td>";
                                echo "<td>";
                                echo "$ccy->usd";
                                echo "</td>";
                                echo "</tr>";
                            }
                            echo "</tbody>";

                            // Lãi suất định kỳ
                            echo "<tbody id='tkthuonglaidinhky' class='laisuattietkiem-tbody tkthuonglaidinhky' style='display: none;'>";
                            foreach($tkthuonglaidinhky as $ccy){
                                echo "<tr>";
                                echo "<td class='first'>";
                                echo "$ccy->tenor";
                                echo "</td>";
                                echo "<td>";
                                echo "$ccy->vnd";
                                echo "</td>";
                                echo "<td>";
                                echo "$ccy->usd";
                                echo "</td>";
                                echo "</tr>";
                            }
                            echo "</tbody>";

                            // Lãi suất TK điện tử
                            echo "<tbody id='tkdientu' class='laisuattietkiem-tbody tkdientu' style='display: none;'>";
                            foreach($tkdientu as $ccy){
                                echo "<tr>";
                                echo "<td class='first'>";
                                echo "$ccy->tenor";
                                echo "</td>";
                                echo "<td>";
                                echo "$ccy->vnd";
                                echo "</td>";
                                echo "<td>";
                                echo "$ccy->usd";
                                echo "</td>";
                                echo "</tr>";
                            }
                            echo "</tbody>";
                            echo "</table>";
                            ?>
                            </div>
                        </div>
                      </div>
                    </div>
                  <?php } ?>
                  <?php dynamic_sidebar('second-footer-widget-area'); ?>
                </div>
                
                <div class="one-fourth"  id="one-half-third">
                  <?php if(is_front_page() ) { ?>
                    <?php 
                    $rows_money = get_field('bang_lai_suat', 2610);
                    $rows_gold = get_field('bang_lai_suat', 2606);
                    ?>
                    <div class="interest-common">
                      <div>
                        <img src="<?php echo bloginfo('template_url'); ?>/images/logo_doji_lai_suat.jpg"/>
                      </div>
                      <div class="right-box">
                        <div class="clear-block">
                          <div class="gold-external">
                            <?php if (theme_get_option('footer','display_api')) { ?>  
                              <h3>
                                <span id="Cours1_lblLabel_GoldPrice">Lãi vay vốn tiền</span>
                                <!--<span id="link-ext"><i><a href="http://doji.vn/lai-suat-huy-dong/" target="_bank">Chi tiết</a></i></span>-->
                              </h3>
                              <table width="100%" class="goldprice-view sticky-enabled laisuat">
                              <thead>
                                <tr class="first">
                                  <th class="first" colspan="3">

                                    <select id="interest" name="interest">
                                      <option value="tien">Lãi suất cuối kỳ tiền</option>
                                      <?php if (theme_get_option('footer','display_api_gold')) { ?>  
                                        <option value="vang">Lãi suất cuối kỳ vàng</option>
                                      <?php } ?>
                                    </select>
                                  </th>
                                </tr>
                                <tr><th class="first">Kỳ hạn</th><th>Tháng</th><th>Năm</th> </tr>
                              </thead>
                              <?php } else { ?>
                                <h3>
                                <span id="Cours1_lblLabel_GoldPrice"></span>
                                <!--<span id="link-ext"><i><a href="http://doji.vn/lai-suat-huy-dong/" target="_bank">Chi tiết</a></i></span>-->
                              </h3>
                              <table width="100%" class="goldprice-view sticky-enabled laisuat">
                              <thead>
                                <tr class="first">
                                  <th class="first" colspan="3">

                                    <select id="interest" name="interest">
                                      <option value="tien"></option>
                                      <!--<option value="vang">Lãi suất cuối kỳ vàng</option>-->
                                    </select>
                                  </th>
                                </tr>
                                <tr><th class="first">-</th><th>-</th><th>-</th> </tr>
                              </thead>
                              <?php } ?>
                            <tbody id="money" class="int-tbody laisuat-tien">
                              <?php 
                                if($rows_money) { 
                                  foreach($rows_money as $row) {
                                  ?>
                                  <?php if (theme_get_option('footer','display_api')) { ?>  
                                    <tr class="group_gold odd"><td class="first"><?php echo $row['ky_han']; ?></td><td class="bid "><?php echo $row['gia_tri_thang']; ?></td><td class="ask "><?php echo $row['gia_tri_nam']; ?></td> </tr>
                                  <?php } else { ?>  
                                    <tr class="group_gold odd"><td class="first">-</td><td class="bid ">-</td><td class="ask ">-</td> </tr>
                                  <?php } ?> 
                                  <?php }
                                }
                              ?>
                            </tbody>
								
                            <tbody id="gold" class="int-tbody laisuat-vang"   style="display: none;">
                            <?php 
                            if($rows_gold) { 
                              foreach($rows_gold as $row) {
                              ?>
                                <tr class="group_gold odd"><td class="first"><?php echo $row['ky_han']; ?></td><td class="bid "><?php echo $row['gia_tri_thang']; ?></td><td class="ask "><?php echo $row['gia_tri_nam']; ?></td> </tr>
                              <?php }
                              }
                            ?>
                           </tbody>

                           </table>
                           
                          </div>
                        </div>
                      </div>
                    </div>
                  <?php } ?>
                  
                  <?php dynamic_sidebar('third-footer-widget-area'); ?>
                </div>
                <div class="one-fourth last"  id="one-half-fourth">
                  
                  <?php if(is_front_page() ) { ?>
                    <?php 
                    //$section = file_get_contents('http://www.trangsuc.doji.vn/Web/data_kcv.aspx');
                    $section = wp_remote_retrieve_body( wp_remote_get('http://www.trangsuc.doji.vn/Web/data_kcv.aspx') );
                    $arr = json_decode($section);
if (isset($_GET['is_testing'])) {
echo $section;die;
}
                    ?>
                    <div class="kimcuong-common">
                      <div>
                        <img src="<?php echo bloginfo('template_url'); ?>/images/logo_bang_gia_kim_cuong.jpg"/>
                      </div>
                      <div class="right-box">
                        <div class="clear-block">
                          <div class="kimcuong-external">
                            <h3>
                              <span id="Cours1_lblLabel_GoldPrice">Bảng giá kim cương</span>
                              <span id="link-ext"><i><a href="http://www.trangsuc.doji.vn/vi-VN/Kim-Cuong/Kim-cuong-vien/oder_prioandid/pageall/doji.html" target="_bank">Chi tiết</a></i></span>
                            </h3>
                            <div id="div-kimcuong">
                              <table width="100%" class="goldprice-view sticky-enabled laisuat"> 
                               <thead>
                                 <tr><th class="">Cỡ</th><th>Nước</th><th>T.Khiết</th><th>K.Định</th><th>Giá (1000đ)</th> </tr>
                               </thead>        

                                 <?php
                               echo "<tbody>";
                               foreach($arr->kcviens as $kcviens){
                                 echo "<tr>";
                                 echo "<td>";
                                 echo substr($kcviens->kich_thuoc_kc, 0, -2);
                                 echo "</td>";
                                 echo "<td>";
                                 echo "$kcviens->nuoc_kc";
                                 echo "</td>";
                                 echo "<td>";
                                 echo "$kcviens->do_tinh_khiet";
                                 echo "</td>";
                                 echo "<td>";
                                 echo "$kcviens->kiem_dinh";
                                 echo "</td>";
                                 echo "<td class='last'>";
                                 echo substr($kcviens->gia, 0, -4);
                                 echo "</td>";
                                 echo "</tr>";
                               }
                               echo "</tbody>";
                               echo "</table>";
                               ?>
                             </div>
                            </div>
                        </div>
                      </div>
                    </div>
                  <?php } ?>
                  
                  <?php dynamic_sidebar('fourth-footer-widget-area'); ?>
                </div>
                <?php
                break;
            case 5:
                ?>
                <div class="one-fifth"><?php dynamic_sidebar('first-footer-widget-area'); ?></div>
                <div class="one-fifth"><?php dynamic_sidebar('second-footer-widget-area'); ?></div>
                <div class="one-fifth"><?php dynamic_sidebar('third-footer-widget-area'); ?></div>
                <div class="one-fifth"><?php dynamic_sidebar('fourth-footer-widget-area'); ?></div>
                <div class="one-fifth last"><?php dynamic_sidebar('fifth-footer-widget-area'); ?></div>
                <?php
                break;
            case 6:
                ?>
                <div class="one-sixth"><?php dynamic_sidebar('first-footer-widget-area'); ?></div>
                <div class="one-sixth"><?php dynamic_sidebar('second-footer-widget-area'); ?></div>
                <div class="one-sixth"><?php dynamic_sidebar('third-footer-widget-area'); ?></div>
                <div class="one-sixth"><?php dynamic_sidebar('fourth-footer-widget-area'); ?></div>
                <div class="one-sixth"><?php dynamic_sidebar('fifth-footer-widget-area'); ?></div>
                <div class="one-sixth last"><?php dynamic_sidebar('sixth-footer-widget-area'); ?></div>
                <?php
                break;
            }	
        	?>
            </div>
            <?php endif; ?>

            <?php if (theme_get_option('footer','display_sub_footer')) : ?>
            <div id="copyrights">
                <div class="inner">
                  <div class="copy-menu">
                    <?php 
                      $menu = wp_get_nav_menu_object('footer');
                      if ($menu) {
                        wp_nav_menu(array('theme_location' => 'footer-menu', 'container' => 'false', 'menu_class' => 'footer-menu', 'depth' => '1'));  
                      }
                    ?>
                  </div>
                  <div class="copy-text"><?php echo stripslashes(theme_get_option('footer','footer_copyright')); ?></div>
                </div>
            </div>
            <!-- / copyrights --> 
            <?php endif; ?>
        </div>
    </div>
    <!-- / footer -->
</div>
<!-- / nos-web -->

<?php wp_footer(); ?>
<script type='text/javascript' src='http://www.tracuugiavang.com/analytics/script.js'></script>
<?php if (theme_get_option('general','theme_analytics')) : echo stripslashes(theme_get_option('general','theme_analytics')); endif; ?>
</body>
</html>