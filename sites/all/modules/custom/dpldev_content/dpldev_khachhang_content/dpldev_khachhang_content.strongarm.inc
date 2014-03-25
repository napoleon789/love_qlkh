<?php

/**
 * Implementation of hook_strongarm().
 */
function dpldev_khachhang_content_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_khachhang';
  $strongarm->value = 0;
  $export['comment_anonymous_khachhang'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_khachhang';
  $strongarm->value = '3';
  $export['comment_controls_khachhang'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_khachhang';
  $strongarm->value = '4';
  $export['comment_default_mode_khachhang'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_khachhang';
  $strongarm->value = '1';
  $export['comment_default_order_khachhang'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_khachhang';
  $strongarm->value = '50';
  $export['comment_default_per_page_khachhang'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_khachhang';
  $strongarm->value = '0';
  $export['comment_form_location_khachhang'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_khachhang';
  $strongarm->value = '0';
  $export['comment_khachhang'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_khachhang';
  $strongarm->value = '1';
  $export['comment_preview_khachhang'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_khachhang';
  $strongarm->value = '1';
  $export['comment_subject_field_khachhang'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_khachhang';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '-1',
    'author' => '-2',
    'options' => '0',
    'menu' => '-3',
  );
  $export['content_extra_weights_khachhang'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_khachhang';
  $strongarm->value = '0';
  $export['language_content_type_khachhang'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_khachhang';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_khachhang'] = $strongarm;

  return $export;
}
