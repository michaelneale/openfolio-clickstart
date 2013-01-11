<?php
/**
 * @file
 * openfolio_multi_upload.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function openfolio_multi_upload_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bulk_media_upload_bundle';
  $strongarm->value = 'picture';
  $export['bulk_media_upload_bundle'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bulk_media_upload_entity_type';
  $strongarm->value = 'node';
  $export['bulk_media_upload_entity_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bulk_media_upload_mediafield';
  $strongarm->value = 'field_image';
  $export['bulk_media_upload_mediafield'] = $strongarm;

  return $export;
}
