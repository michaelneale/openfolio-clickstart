<?php
/**
 * @file
 * openfolio_multi_upload.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function openfolio_multi_upload_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management:admin/content/media/bulk_upload
  $menu_links['management:admin/content/media/bulk_upload'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/content/media/bulk_upload',
    'router_path' => 'admin/content/media/bulk_upload',
    'link_title' => 'Bulk Media Upload',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/content',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Bulk Media Upload');


  return $menu_links;
}
