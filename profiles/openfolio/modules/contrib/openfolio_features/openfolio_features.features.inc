<?php
/**
 * @file
 * openfolio_features.features.inc
 */

/**
 * Implements hook_ccl_features_preset().
 */
function openfolio_features_ccl_features_preset() {
  return array(
    'Add a Gallery' => array(
      'type' => 'local_action',
      'title' => 'Add a Gallery',
      'link' => 'node/add/gallery',
      'options' => 'a:9:{s:12:"advanced_css";s:0:"";s:14:"advanced_query";s:0:"";s:12:"node_options";s:4:"node";s:9:"node_type";s:7:"article";s:7:"node_id";s:14:" [nid: [nid:]]";s:13:"la_visibility";s:1:"1";s:8:"la_pages";s:23:"galleries
admin/artist";s:8:"la_types";a:6:{s:7:"article";i:0;s:4:"page";i:0;s:7:"gallery";i:0;s:4:"link";i:0;s:7:"picture";i:0;s:14:"slideshow_page";i:0;}s:8:"la_roles";a:4:{i:1;i:0;i:2;i:0;i:3;i:0;i:4;i:0;}}',
    ),
    'Add a Link' => array(
      'type' => 'local_action',
      'title' => 'Add a Link',
      'link' => 'node/add/link',
      'options' => 'a:9:{s:12:"advanced_css";s:0:"";s:14:"advanced_query";s:0:"";s:12:"node_options";s:4:"node";s:9:"node_type";s:7:"article";s:7:"node_id";s:0:"";s:13:"la_visibility";s:1:"1";s:8:"la_pages";s:18:"admin/artist/links";s:8:"la_types";a:6:{s:7:"article";i:0;s:4:"page";i:0;s:7:"gallery";i:0;s:4:"link";i:0;s:7:"picture";i:0;s:14:"slideshow_page";i:0;}s:8:"la_roles";a:4:{i:1;i:0;i:2;i:0;i:3;i:0;i:4;i:0;}}',
    ),
    'Add an Image' => array(
      'type' => 'local_action',
      'title' => 'Add an Image',
      'link' => 'node/add/picture',
      'options' => 'a:9:{s:12:"advanced_css";s:0:"";s:14:"advanced_query";s:55:"field_gallery=[current-page:url:unaliased:args:value:1]";s:12:"node_options";s:2:"ct";s:9:"node_type";s:7:"gallery";s:7:"node_id";s:0:"";s:13:"la_visibility";s:1:"0";s:8:"la_pages";s:0:"";s:8:"la_types";a:6:{s:7:"gallery";s:7:"gallery";s:7:"article";i:0;s:4:"page";i:0;s:4:"link";i:0;s:7:"picture";i:0;s:14:"slideshow_page";i:0;}s:8:"la_roles";a:4:{i:1;i:0;i:2;i:0;i:3;i:0;i:4;i:0;}}',
    ),
    'Manage/Sort Galleries' => array(
      'type' => 'local_action',
      'title' => 'Manage/Sort Galleries',
      'link' => 'admin/artist',
      'options' => 'a:12:{s:12:"advanced_css";s:0:"";s:14:"advanced_query";s:0:"";s:12:"node_options";s:4:"node";s:9:"node_type";s:7:"article";s:7:"node_id";s:0:"";s:13:"la_visibility";s:1:"1";s:8:"la_pages";s:9:"galleries";s:8:"la_types";a:6:{s:7:"article";i:0;s:4:"page";i:0;s:7:"gallery";i:0;s:4:"link";i:0;s:7:"picture";i:0;s:14:"slideshow_page";i:0;}s:8:"la_roles";a:4:{i:1;i:0;i:2;i:0;i:3;i:0;i:4;i:0;}s:12:"view_options";s:1:"2";s:12:"view_display";s:17:"galleries|default";s:9:"view_view";s:9:"galleries";}',
    ),
  );
}

/**
 * Implements hook_ctools_plugin_api().
 */
function openfolio_features_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function openfolio_features_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function openfolio_features_image_default_styles() {
  $styles = array();

  // Exported image style: extra_large.
  $styles['extra_large'] = array(
    'name' => 'extra_large',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '700',
          'height' => '700',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: medium_uniform.
  $styles['medium_uniform'] = array(
    'name' => 'medium_uniform',
    'effects' => array(
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '300',
          'height' => '300',
        ),
        'weight' => '2',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function openfolio_features_node_info() {
  $items = array(
    'gallery' => array(
      'name' => t('Gallery'),
      'base' => 'node_content',
      'description' => t('Galleries contain pictures'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'link' => array(
      'name' => t('Link'),
      'base' => 'node_content',
      'description' => t('Add a link to another site'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'picture' => array(
      'name' => t('Picture'),
      'base' => 'node_content',
      'description' => t('This an image of a painting or another piece of art'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'slideshow_page' => array(
      'name' => t('Slideshow Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
