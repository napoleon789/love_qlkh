<?php
function dpldev_report_khohang_setting() {
  $items = dpldev_content_get_table_values('khohang');
  $khohang_setting = variable_get('khohang_setting', array());
  $form = array();  
  $form['khohang_setting'] = array(
    '#type' => 'fieldset',
    '#tree' => TRUE,       
  );

  foreach ($items as $obj) {

    $form['khohang_setting'][$obj->id] = array(
      '#type' => 'fieldset',
      '#title' => $obj->name,
      '#tree' => TRUE,      
      '#collapsible' => TRUE,
      '#collapsed' => FALSE,    
    );
    $form['khohang_setting'][$obj->id]['label'] = array(
      '#type' => 'textfield',               
      '#title' => t('Color'),
      '#default_value' => isset($khohang_setting[$obj->id]['label']) ? $khohang_setting[$obj->id]['label'] : $obj->name,
    );
    $form['khohang_setting'][$obj->id]['color'] = array(
      '#type' => 'colorpicker',               
      '#title' => NULL,  
      '#default_value' => isset($khohang_setting[$obj->id]['color']) ? $khohang_setting[$obj->id]['color'] : '',
    );
    $form['khohang_setting'][$obj->id]['label'] = array(
      '#type' => 'textfield',               
      '#title' => NULL,  
      '#default_value' => isset($khohang_setting[$obj->id]['label']) ? $khohang_setting[$obj->id]['label'] : $obj->name,
    );
    $form['khohang_setting'][$obj->id]['disable'] = array(
      '#type' => 'checkbox',               
      '#title' => NULL,  
      '#default_value' => isset($khohang_setting[$obj->id]['disable']) ? $khohang_setting[$obj->id]['disable'] : 0,
    );
  }
  $form['#theme'] = array('khohang_setting');
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Cập nhập', array(), 'vi')
  );

  return $form;
}

function dpldev_report_khohang_setting_submit($form, &$form_state) {
  variable_set('khohang_setting', $form_state['values']['khohang_setting']);
}