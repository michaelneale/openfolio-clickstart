<?php
/**
 * @file
 * openfolio_features.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function openfolio_features_user_default_roles() {
  $roles = array();

  // Exported role: artist.
  $roles['artist'] = array(
    'name' => 'artist',
    'weight' => '3',
  );

  return $roles;
}
