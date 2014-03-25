<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function dpldev_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-shortcut
  $menus['menu-shortcut'] = array(
    'menu_name' => 'menu-shortcut',
    'title' => 'Short Cut',
    'description' => '',
  );
  // Exported menu: menu-shortcut2
  $menus['menu-shortcut2'] = array(
    'menu_name' => 'menu-shortcut2',
    'title' => 'Shortcut',
    'description' => '',
  );
  // Exported menu: menu-topshortcut
  $menus['menu-topshortcut'] = array(
    'menu_name' => 'menu-topshortcut',
    'title' => 'Tao Khach Hang + Import Khach Hang',
    'description' => '',
  );
  // Exported menu: primary-links
  $menus['primary-links'] = array(
    'menu_name' => 'primary-links',
    'title' => 'Primary links',
    'description' => 'Primary links are often used at the theme layer to show the major sections of a site. A typical representation for primary links would be tabs along the top.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Primary links');
  t('Primary links are often used at the theme layer to show the major sections of a site. A typical representation for primary links would be tabs along the top.');
  t('Short Cut');
  t('Shortcut');
  t('Tao Khach Hang + Import Khach Hang');


  return $menus;
}
