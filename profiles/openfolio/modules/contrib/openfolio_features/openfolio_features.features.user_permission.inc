<?php
/**
 * @file
 * openfolio_features.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function openfolio_features_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration pages.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      0 => 'administrator',
      1 => 'artist',
    ),
    'module' => 'system',
  );

  // Exported permission: access draggableviews.
  $permissions['access draggableviews'] = array(
    'name' => 'access draggableviews',
    'roles' => array(
      0 => 'administrator',
      1 => 'artist',
    ),
    'module' => 'draggableviews',
  );

  // Exported permission: access site-wide contact form.
  $permissions['access site-wide contact form'] = array(
    'name' => 'access site-wide contact form',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'contact',
  );

  // Exported permission: administer site configuration.
  $permissions['access toolbar'] = array(
    'name' => 'access toolbar',
    'roles' => array(
      0 => 'administrator',
      1 => 'artist',
    ),
    'module' => 'toolbar',
  );

  // Exported permission: create gallery content.
  $permissions['create gallery content'] = array(
    'name' => 'create gallery content',
    'roles' => array(
      0 => 'artist',
    ),
    'module' => 'node',
  );

  // Exported permission: create link content.
  $permissions['create link content'] = array(
    'name' => 'create link content',
    'roles' => array(
      0 => 'artist',
    ),
    'module' => 'node',
  );

  // Exported permission: create picture content.
  $permissions['create picture content'] = array(
    'name' => 'create picture content',
    'roles' => array(
      0 => 'artist',
    ),
    'module' => 'node',
  );

  // Exported permission: create slideshow_page content.
  $permissions['create slideshow_page content'] = array(
    'name' => 'create slideshow_page content',
    'roles' => array(
      0 => 'artist',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any gallery content.
  $permissions['delete any gallery content'] = array(
    'name' => 'delete any gallery content',
    'roles' => array(
      0 => 'artist',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any link content.
  $permissions['delete any link content'] = array(
    'name' => 'delete any link content',
    'roles' => array(
      0 => 'artist',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any picture content.
  $permissions['delete any picture content'] = array(
    'name' => 'delete any picture content',
    'roles' => array(
      0 => 'artist',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any slideshow_page content.
  $permissions['delete any slideshow_page content'] = array(
    'name' => 'delete any slideshow_page content',
    'roles' => array(
      0 => 'artist',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own gallery content.
  $permissions['delete own gallery content'] = array(
    'name' => 'delete own gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own link content.
  $permissions['delete own link content'] = array(
    'name' => 'delete own link content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own picture content.
  $permissions['delete own picture content'] = array(
    'name' => 'delete own picture content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own slideshow_page content.
  $permissions['delete own slideshow_page content'] = array(
    'name' => 'delete own slideshow_page content',
    'roles' => array(
      0 => 'artist',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any gallery content.
  $permissions['edit any gallery content'] = array(
    'name' => 'edit any gallery content',
    'roles' => array(
      0 => 'artist',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any link content.
  $permissions['edit any link content'] = array(
    'name' => 'edit any link content',
    'roles' => array(
      0 => 'artist',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any picture content.
  $permissions['edit any picture content'] = array(
    'name' => 'edit any picture content',
    'roles' => array(
      0 => 'artist',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any slideshow_page content.
  $permissions['edit any slideshow_page content'] = array(
    'name' => 'edit any slideshow_page content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own gallery content.
  $permissions['edit own gallery content'] = array(
    'name' => 'edit own gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own link content.
  $permissions['edit own link content'] = array(
    'name' => 'edit own link content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own picture content.
  $permissions['edit own picture content'] = array(
    'name' => 'edit own picture content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own slideshow_page content.
  $permissions['edit own slideshow_page content'] = array(
    'name' => 'edit own slideshow_page content',
    'roles' => array(
      0 => 'artist',
    ),
    'module' => 'node',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: view the administration theme.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      0 => 'administrator',
      1 => 'artist',
    ),
    'module' => 'system',
  );

  return $permissions;
}
