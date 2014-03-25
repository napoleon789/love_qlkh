<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function dpldev_donhang_content_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function dpldev_donhang_content_node_info() {
  $items = array(
    'donhang' => array(
      'name' => t('Đơn hàng'),
      'module' => 'features',
      'description' => t('Sử dụng để tạo đơn hàng'),
      'has_title' => '1',
      'title_label' => t('Số hóa đơn'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );

  return $items;
}
