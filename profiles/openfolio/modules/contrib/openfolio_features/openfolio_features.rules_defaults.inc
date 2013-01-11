<?php
/**
 * @file
 * openfolio_features.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function openfolio_features_default_rules_configuration() {
  $items = array();
  $items['rules_update_preview_image'] = entity_import('rules_config', '{ "rules_update_preview_image" : {
      "LABEL" : "Update Preview Image",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "visual portfolio" ],
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_insert", "node_update" ],
      "IF" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "picture" : "picture" } } } },
        { "entity_has_field" : { "entity" : [ "node:field-gallery" ], "field" : "field_main_image" } },
        { "data_is_empty" : { "data" : [ "node:field-gallery:field-main-image" ] } }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "node:field-gallery:field-main-image" ],
            "value" : [ "node" ]
          }
        },
        { "drupal_message" : { "message" : "Preview image for gallery has been updated" } }
      ]
    }
  }');
  return $items;
}
