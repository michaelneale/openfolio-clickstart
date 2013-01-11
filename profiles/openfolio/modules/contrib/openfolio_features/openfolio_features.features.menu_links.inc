<?php
/**
 * @file
 * openfolio_features.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function openfolio_features_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management:node/add/gallery
  $menu_links['management:node/add/gallery'] = array(
    'menu_name' => 'management',
    'link_path' => 'node/add/gallery',
    'router_path' => 'node/add/gallery',
    'link_title' => 'Add a Gallery',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
    'parent_path' => 'admin',
  );
  // Exported menu link: management:node/add/link
  $menu_links['management:node/add/link'] = array(
    'menu_name' => 'management',
    'link_path' => 'node/add/link',
    'router_path' => 'node/add/link',
    'link_title' => 'Add A Link',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-41',
    'parent_path' => 'admin',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add A Link');
  t('Add a Gallery');


  return $menu_links;
}
