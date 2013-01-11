<?php
/**
 * @file
 * openfolio_multi_upload.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function openfolio_multi_upload_user_default_permissions() {
  $permissions = array();

  // Exported permission: bulk upload media.
  $permissions['bulk upload media'] = array(
    'name' => 'bulk upload media',
    'roles' => array(
      0 => 'administrator',
      1 => 'artist',
    ),
    'module' => 'bulk_media_upload',
  );

  return $permissions;
}
