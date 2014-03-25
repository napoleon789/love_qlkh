<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function dpldev_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-shortcut2:marketing
  $menu_links['menu-shortcut2:marketing'] = array(
    'menu_name' => 'menu-shortcut2',
    'link_path' => 'marketing',
    'router_path' => 'marketing',
    'link_title' => '<span class="icon-sms"></span> SMS',
    'options' => array(
      'attributes' => array(
        'title' => 'SMS',
        'class' => 'link-btn',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-shortcut2:marketing/email
  $menu_links['menu-shortcut2:marketing/email'] = array(
    'menu_name' => 'menu-shortcut2',
    'link_path' => 'marketing/email',
    'router_path' => 'marketing',
    'link_title' => '<span class="icon-email"></span> Email',
    'options' => array(
      'attributes' => array(
        'title' => 'Email',
        'class' => 'link-btn',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-shortcut2:marketing/membercard
  $menu_links['menu-shortcut2:marketing/membercard'] = array(
    'menu_name' => 'menu-shortcut2',
    'link_path' => 'marketing/membercard',
    'router_path' => 'marketing',
    'link_title' => '<span class="icon-membercard"></span> Member card',
    'options' => array(
      'attributes' => array(
        'title' => 'Member card',
        'class' => 'link-btn',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: menu-shortcut2:marketing/thutay
  $menu_links['menu-shortcut2:marketing/thutay'] = array(
    'menu_name' => 'menu-shortcut2',
    'link_path' => 'marketing/thutay',
    'router_path' => 'marketing',
    'link_title' => '<span class="icon-letter"></span> Thư tay',
    'options' => array(
      'attributes' => array(
        'title' => 'Thư tay',
        'class' => 'link-btn',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-shortcut:khachhang/clone
  $menu_links['menu-shortcut:khachhang/clone'] = array(
    'menu_name' => 'menu-shortcut',
    'link_path' => 'khachhang/clone',
    'router_path' => 'khachhang',
    'link_title' => '<span class="icon-clone"></span> Nhập contact trùng',
    'options' => array(
      'attributes' => array(
        'title' => 'Nhập contact trùng',
        'class' => 'link-btn khachhang-clone',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-41',
  );
  // Exported menu link: menu-shortcut:node/add/import-from-excel
  $menu_links['menu-shortcut:node/add/import-from-excel'] = array(
    'menu_name' => 'menu-shortcut',
    'link_path' => 'node/add/import-from-excel',
    'router_path' => 'node/add',
    'link_title' => '<span class="icon-import"></span> Nhập từ Excel',
    'options' => array(
      'attributes' => array(
        'title' => 'Import từ Excel',
        'class' => 'link-btn',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-shortcut:node/add/khachhang
  $menu_links['menu-shortcut:node/add/khachhang'] = array(
    'menu_name' => 'menu-shortcut',
    'link_path' => 'node/add/khachhang',
    'router_path' => 'node/add/khachhang',
    'link_title' => '<span class="icon-add"></span> Tạo khách hàng mới',
    'options' => array(
      'attributes' => array(
        'class' => 'link-btn',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-topshortcut:node/add/khachhang
  $menu_links['menu-topshortcut:node/add/khachhang'] = array(
    'menu_name' => 'menu-topshortcut',
    'link_path' => 'node/add/khachhang',
    'router_path' => 'node/add/khachhang',
    'link_title' => '<span class="icon-add"></span> Tạo khách hàng mới',
    'options' => array(
      'attributes' => array(
        'title' => 'Tạo khách hàng mới',
        'class' => 'link-btn',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: primary-links:<front>
  $menu_links['primary-links:<front>'] = array(
    'menu_name' => 'primary-links',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Trang chủ',
    'options' => array(
      'attributes' => array(
        'title' => 'Trang chủ',
        'class' => 'home',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: primary-links:khachhang
  $menu_links['primary-links:khachhang'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'khachhang',
    'router_path' => 'khachhang',
    'link_title' => 'Khách hàng',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: primary-links:khachhang/vip
  $menu_links['primary-links:khachhang/vip'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'khachhang/vip',
    'router_path' => 'khachhang/vip',
    'link_title' => 'VIP',
    'options' => array(
      'attributes' => array(
        'title' => 'VIP',
        'class' => 'khachhang-vip',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: primary-links:logout
  $menu_links['primary-links:logout'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'logout',
    'router_path' => 'logout',
    'link_title' => 'Đăng xuất',
    'options' => array(
      'attributes' => array(
        'title' => 'Đăng xuất',
        'class' => 'login-logout',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-41',
  );
  // Exported menu link: primary-links:marketing
  $menu_links['primary-links:marketing'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'marketing',
    'router_path' => 'marketing',
    'link_title' => 'Marketing',
    'options' => array(
      'attributes' => array(
        'title' => 'Marketing',
        'class' => 'marketing',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: primary-links:user
  $menu_links['primary-links:user'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'Tài khoản',
    'options' => array(
      'attributes' => array(
        'title' => 'Tài khoản',
        'class' => 'tai-khoan',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('<span class="icon-add"></span> Tạo khách hàng mới');
  t('<span class="icon-clone"></span> Nhập contact trùng');
  t('<span class="icon-email"></span> Email');
  t('<span class="icon-import"></span> Nhập từ Excel');
  t('<span class="icon-letter"></span> Thư tay');
  t('<span class="icon-membercard"></span> Member card');
  t('<span class="icon-sms"></span> SMS');
  t('Khách hàng');
  t('Marketing');
  t('Trang chủ');
  t('Tài khoản');
  t('VIP');
  t('Đăng xuất');


  return $menu_links;
}
