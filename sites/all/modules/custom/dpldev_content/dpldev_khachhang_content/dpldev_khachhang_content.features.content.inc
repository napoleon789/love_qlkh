<?php

/**
 * Implementation of hook_content_default_fields().
 */
function dpldev_khachhang_content_content_default_fields() {
  $fields = array();

  // Exported field: field_anhdaidien
  $fields['khachhang-field_anhdaidien'] = array(
    'field_name' => 'field_anhdaidien',
    'type_name' => 'khachhang',
    'display_settings' => array(
      'weight' => '13',
      'parent' => '',
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'anhdaidien',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'resolution' => '100x100',
      'enforce_ratio' => 1,
      'croparea' => '500x500',
      'enforce_minimum' => 1,
      'label' => 'Ảnh đại diện',
      'weight' => '14',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_chucdanh
  $fields['khachhang-field_chucdanh'] = array(
    'field_name' => 'field_chucdanh',
    'type_name' => 'khachhang',
    'display_settings' => array(
      'weight' => '10',
      'parent' => '',
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => 0,
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'size' => '60',
      'autocomplete_match' => 'contains',
      'autocomplete_case' => '1',
      'i18n_flddata' => 0,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_chucdanh][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Chức danh',
      'weight' => '11',
      'description' => '',
      'type' => 'autocomplete_widgets_flddata',
      'module' => 'autocomplete_widgets',
    ),
  );

  // Exported field: field_congty
  $fields['khachhang-field_congty'] = array(
    'field_name' => 'field_congty',
    'type_name' => 'khachhang',
    'display_settings' => array(
      'weight' => '12',
      'parent' => '',
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_congty][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Công ty',
      'weight' => '13',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_diachi
  $fields['khachhang-field_diachi'] = array(
    'field_name' => 'field_diachi',
    'type_name' => 'khachhang',
    'display_settings' => array(
      'weight' => '23',
      'parent' => '',
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => 0,
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'size' => '60',
      'autocomplete_match' => 'contains',
      'autocomplete_case' => '1',
      'i18n_flddata' => 0,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_diachi][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Địa chỉ',
      'weight' => '24',
      'description' => '',
      'type' => 'autocomplete_widgets_flddata',
      'module' => 'autocomplete_widgets',
    ),
  );

  // Exported field: field_diachi_khac
  $fields['khachhang-field_diachi_khac'] = array(
    'field_name' => 'field_diachi_khac',
    'type_name' => 'khachhang',
    'display_settings' => array(
      'weight' => '27',
      'parent' => '',
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => 0,
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'size' => '60',
      'autocomplete_match' => 'contains',
      'autocomplete_case' => '1',
      'i18n_flddata' => 0,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_diachi_khac][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Địa chỉ khác',
      'weight' => '28',
      'description' => '',
      'type' => 'autocomplete_widgets_flddata',
      'module' => 'autocomplete_widgets',
    ),
  );

  // Exported field: field_diachi_khac_quanhuyen
  $fields['khachhang-field_diachi_khac_quanhuyen'] = array(
    'field_name' => 'field_diachi_khac_quanhuyen',
    'type_name' => 'khachhang',
    'display_settings' => array(
      'weight' => '28',
      'parent' => '',
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => 0,
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'size' => '60',
      'autocomplete_match' => 'contains',
      'autocomplete_case' => '1',
      'i18n_flddata' => 0,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_diachi_khac_quanhuyen][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Quận / Huyện khác',
      'weight' => '29',
      'description' => '',
      'type' => 'autocomplete_widgets_flddata',
      'module' => 'autocomplete_widgets',
    ),
  );

  // Exported field: field_diachi_khac_quocgia
  $fields['khachhang-field_diachi_khac_quocgia'] = array(
    'field_name' => 'field_diachi_khac_quocgia',
    'type_name' => 'khachhang',
    'display_settings' => array(
      'weight' => '30',
      'parent' => '',
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => 'return dpldev_content_get_countries();',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Quốc gia khác',
      'weight' => '31',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_diachi_khac_tinhthanhpho
  $fields['khachhang-field_diachi_khac_tinhthanhpho'] = array(
    'field_name' => 'field_diachi_khac_tinhthanhpho',
    'type_name' => 'khachhang',
    'display_settings' => array(
      'weight' => '29',
      'parent' => '',
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => 'return dpldev_content_get_provinces();',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Tỉnh / Thành phố khác',
      'weight' => '30',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_diachi_quanhuyen
  $fields['khachhang-field_diachi_quanhuyen'] = array(
    'field_name' => 'field_diachi_quanhuyen',
    'type_name' => 'khachhang',
    'display_settings' => array(
      'weight' => '24',
      'parent' => '',
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => 0,
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'size' => '60',
      'autocomplete_match' => 'contains',
      'autocomplete_case' => '1',
      'i18n_flddata' => 0,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_diachi_quanhuyen][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Quận / Huyện',
      'weight' => '25',
      'description' => '',
      'type' => 'autocomplete_widgets_flddata',
      'module' => 'autocomplete_widgets',
    ),
  );

  // Exported field: field_diachi_quocgia
  $fields['khachhang-field_diachi_quocgia'] = array(
    'field_name' => 'field_diachi_quocgia',
    'type_name' => 'khachhang',
    'display_settings' => array(
      'weight' => '26',
      'parent' => '',
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => 'return dpldev_content_get_countries();',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Quốc gia',
      'weight' => '27',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_diachi_tinhthanhpho
  $fields['khachhang-field_diachi_tinhthanhpho'] = array(
    'field_name' => 'field_diachi_tinhthanhpho',
    'type_name' => 'khachhang',
    'display_settings' => array(
      'weight' => '25',
      'parent' => '',
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => 'return dpldev_content_get_provinces();',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Tỉnh / Thành phố',
      'weight' => '26',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_email
  $fields['khachhang-field_email'] = array(
    'field_name' => 'field_email',
    'type_name' => 'khachhang',
    'display_settings' => array(
      'weight' => '8',
      'parent' => '',
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'email',
    'required' => '0',
    'multiple' => '0',
    'module' => 'email',
    'active' => '1',
    'widget' => array(
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'email' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Email',
      'weight' => '9',
      'description' => '',
      'type' => 'email_textfield',
      'module' => 'email',
    ),
  );

  // Exported field: field_facebook
  $fields['khachhang-field_facebook'] = array(
    'field_name' => 'field_facebook',
    'type_name' => 'khachhang',
    'display_settings' => array(
      'weight' => '18',
      'parent' => '',
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_facebook][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Facebook',
      'weight' => '19',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_ghichu
  $fields['khachhang-field_ghichu'] = array(
    'field_name' => 'field_ghichu',
    'type_name' => 'khachhang',
    'display_settings' => array(
      'weight' => '22',
      'parent' => '',
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '7',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_ghichu][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Ghi chú',
      'weight' => '23',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_gioitinh
  $fields['khachhang-field_gioitinh'] = array(
    'field_name' => 'field_gioitinh',
    'type_name' => 'khachhang',
    'display_settings' => array(
      'weight' => '5',
      'parent' => '',
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'nam|Nam
nu|Nữ',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'nam',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Giới tính',
      'weight' => '5',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_google
  $fields['khachhang-field_google'] = array(
    'field_name' => 'field_google',
    'type_name' => 'khachhang',
    'display_settings' => array(
      'weight' => '19',
      'parent' => '',
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_google][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Google+',
      'weight' => '20',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_hocvan
  $fields['khachhang-field_hocvan'] = array(
    'field_name' => 'field_hocvan',
    'type_name' => 'khachhang',
    'display_settings' => array(
      'weight' => '16',
      'parent' => '',
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'thpt|Trung học phổ thông
cd|Cao đẳng
dh|Đại học
ch|Cao học
ths|Thạc sỹ
ts|Tiến sỹ
gs|Giáo sư
bh|Bác học',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'Trung học phổ thông',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Học vấn',
      'weight' => '17',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_honnhan
  $fields['khachhang-field_honnhan'] = array(
    'field_name' => 'field_honnhan',
    'type_name' => 'khachhang',
    'display_settings' => array(
      'weight' => '17',
      'parent' => '',
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '1|Có gia đình
0|Độc thân',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Hôn nhân',
      'weight' => '18',
      'description' => '',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_hovadem
  $fields['khachhang-field_hovadem'] = array(
    'field_name' => 'field_hovadem',
    'type_name' => 'khachhang',
    'display_settings' => array(
      'weight' => '3',
      'parent' => '',
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => 0,
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'size' => '60',
      'autocomplete_match' => 'contains',
      'autocomplete_case' => '1',
      'i18n_flddata' => 0,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_hovadem][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Họ và đệm',
      'weight' => '3',
      'description' => '',
      'type' => 'autocomplete_widgets_flddata',
      'module' => 'autocomplete_widgets',
    ),
  );

  // Exported field: field_hovaten
  $fields['khachhang-field_hovaten'] = array(
    'field_name' => 'field_hovaten',
    'type_name' => 'khachhang',
    'display_settings' => array(
      'weight' => '2',
      'parent' => '',
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => 0,
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'size' => '60',
      'autocomplete_match' => 'contains',
      'autocomplete_case' => '1',
      'i18n_flddata' => 0,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_hovaten][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Họ và tên',
      'weight' => '2',
      'description' => '',
      'type' => 'autocomplete_widgets_flddata',
      'module' => 'autocomplete_widgets',
    ),
  );

  // Exported field: field_khachhang_buon
  $fields['khachhang-field_khachhang_buon'] = array(
    'field_name' => 'field_khachhang_buon',
    'type_name' => 'khachhang',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '0|Khách hàng buôn
1|Khách hàng buôn',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => NULL,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Khách hàng buôn',
      'weight' => '-4',
      'description' => '',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_makh
  $fields['khachhang-field_makh'] = array(
    'field_name' => 'field_makh',
    'type_name' => 'khachhang',
    'display_settings' => array(
      'weight' => 0,
      'parent' => '',
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => 0,
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'size' => '60',
      'autocomplete_match' => 'contains',
      'autocomplete_case' => '1',
      'i18n_flddata' => 0,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_makh][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Mã khách hàng',
      'weight' => '1',
      'description' => '',
      'type' => 'autocomplete_widgets_flddata',
      'module' => 'autocomplete_widgets',
    ),
  );

  // Exported field: field_mobile
  $fields['khachhang-field_mobile'] = array(
    'field_name' => 'field_mobile',
    'type_name' => 'khachhang',
    'display_settings' => array(
      'weight' => '9',
      'parent' => '',
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_mobile][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Điện thoại di động',
      'weight' => '10',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_ngaycuoi
  $fields['khachhang-field_ngaycuoi'] = array(
    'field_name' => 'field_ngaycuoi',
    'type_name' => 'khachhang',
    'display_settings' => array(
      'weight' => '32',
      'parent' => '',
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'datestamp',
    'required' => '0',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
    ),
    'timezone_db' => '',
    'tz_handling' => 'none',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'short',
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'input_format' => 'd/m/Y',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-80:+3',
      'label_position' => 'above',
      'label' => 'Ngày cưới',
      'weight' => '32',
      'description' => '',
      'type' => 'date_popup',
      'module' => 'date',
    ),
  );

  // Exported field: field_ngaysinh
  $fields['khachhang-field_ngaysinh'] = array(
    'field_name' => 'field_ngaysinh',
    'type_name' => 'khachhang',
    'display_settings' => array(
      'weight' => '6',
      'parent' => '',
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'datestamp',
    'required' => '0',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
    ),
    'timezone_db' => '',
    'tz_handling' => 'none',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'short',
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'input_format' => 'd/m/Y',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-80:+3',
      'label_position' => 'above',
      'label' => 'Ngày sinh',
      'weight' => '6',
      'description' => '',
      'type' => 'date_popup',
      'module' => 'date',
    ),
  );

  // Exported field: field_ngaytotnghiep
  $fields['khachhang-field_ngaytotnghiep'] = array(
    'field_name' => 'field_ngaytotnghiep',
    'type_name' => 'khachhang',
    'display_settings' => array(
      'weight' => '33',
      'parent' => '',
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'datestamp',
    'required' => '0',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
    ),
    'timezone_db' => '',
    'tz_handling' => 'none',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'short',
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'input_format' => 'd/m/Y',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-80:+3',
      'label_position' => 'above',
      'label' => 'Ngày tốt nghiệp',
      'weight' => '33',
      'description' => '',
      'type' => 'date_popup',
      'module' => 'date',
    ),
  );

  // Exported field: field_phone
  $fields['khachhang-field_phone'] = array(
    'field_name' => 'field_phone',
    'type_name' => 'khachhang',
    'display_settings' => array(
      'weight' => '11',
      'parent' => '',
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_phone][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Điện thoại cố định',
      'weight' => '12',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_quan_ly
  $fields['khachhang-field_quan_ly'] = array(
    'field_name' => 'field_quan_ly',
    'type_name' => 'khachhang',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '',
    'max' => '',
    'allowed_values' => '',
    'allowed_values_php' => 'return dpldev_content_get_id_names("cuahang");',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => ' Quản lý',
      'weight' => '8',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_sothich
  $fields['khachhang-field_sothich'] = array(
    'field_name' => 'field_sothich',
    'type_name' => 'khachhang',
    'display_settings' => array(
      'weight' => '15',
      'parent' => '',
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '4',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_sothich][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Sở thích',
      'weight' => '16',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_tapkhachhang
  $fields['khachhang-field_tapkhachhang'] = array(
    'field_name' => 'field_tapkhachhang',
    'type_name' => 'khachhang',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => 'return dpldev_content_get_id_names("tapkhachhang");',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => ' Tập khách hàng',
      'weight' => '7',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_ten
  $fields['khachhang-field_ten'] = array(
    'field_name' => 'field_ten',
    'type_name' => 'khachhang',
    'display_settings' => array(
      'weight' => '4',
      'parent' => '',
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => 0,
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'size' => '60',
      'autocomplete_match' => 'contains',
      'autocomplete_case' => '1',
      'i18n_flddata' => 0,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_ten][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Tên',
      'weight' => '4',
      'description' => '',
      'type' => 'autocomplete_widgets_flddata',
      'module' => 'autocomplete_widgets',
    ),
  );

  // Exported field: field_thunhap
  $fields['khachhang-field_thunhap'] = array(
    'field_name' => 'field_thunhap',
    'type_name' => 'khachhang',
    'display_settings' => array(
      'weight' => '14',
      'parent' => '',
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '10|10-20
20|20-50
50|50-100
100|trên 100
',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Thu nhập',
      'weight' => '15',
      'description' => '',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_twitter
  $fields['khachhang-field_twitter'] = array(
    'field_name' => 'field_twitter',
    'type_name' => 'khachhang',
    'display_settings' => array(
      'weight' => '20',
      'parent' => '',
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_twitter][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Twitter',
      'weight' => '21',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_yahoo
  $fields['khachhang-field_yahoo'] = array(
    'field_name' => 'field_yahoo',
    'type_name' => 'khachhang',
    'display_settings' => array(
      'weight' => '21',
      'parent' => '',
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_yahoo][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Yahoo',
      'weight' => '22',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t(' Quản lý');
  t(' Tập khách hàng');
  t('Chức danh');
  t('Công ty');
  t('Email');
  t('Facebook');
  t('Ghi chú');
  t('Giới tính');
  t('Google+');
  t('Hôn nhân');
  t('Họ và tên');
  t('Họ và đệm');
  t('Học vấn');
  t('Khách hàng buôn');
  t('Mã khách hàng');
  t('Ngày cưới');
  t('Ngày sinh');
  t('Ngày tốt nghiệp');
  t('Quận / Huyện');
  t('Quận / Huyện khác');
  t('Quốc gia');
  t('Quốc gia khác');
  t('Sở thích');
  t('Thu nhập');
  t('Twitter');
  t('Tên');
  t('Tỉnh / Thành phố');
  t('Tỉnh / Thành phố khác');
  t('Yahoo');
  t('Điện thoại cố định');
  t('Điện thoại di động');
  t('Địa chỉ');
  t('Địa chỉ khác');
  t('Ảnh đại diện');

  return $fields;
}
