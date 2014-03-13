<?php
/**
 * @file
 * vih_viggo.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function vih_calendar_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-vih_calendar-viggo_imported_text'
  $field_instances['node-vih_calendar-viggo_imported_text'] = array(
    'bundle' => 'vih_calendar',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Holds imported text from Viggo. Will be overwritten with values from Viggo when syncing.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'vih_viggo',
        'settings' => array(),
        'type' => 'vih_viggo_formatter',
        'weight' => -10,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'viggo_imported_text',
    'label' => 'Viggo Text',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 7,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Holds imported text from Viggo. Will be overwritten with values from Viggo when syncing.');
  t('Viggo Text');

  return $field_instances;
}
