<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function dpldev_khachhang_content_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function dpldev_khachhang_content_node_info() {
  $items = array(
    'khachhang' => array(
      'name' => t('Khách hàng'),
      'module' => 'features',
      'description' => t('Sử dụng để tạo thông tin khách hàng'),
      'has_title' => '1',
      'title_label' => t('Họ Và Tên'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
