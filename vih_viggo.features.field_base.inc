<?php
/**
 * @file
 * vih_viggo.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function vih_viggo_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'viggo_imported_text'
  $field_bases['viggo_imported_text'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'viggo_imported_text',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 1,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  return $field_bases;
}
