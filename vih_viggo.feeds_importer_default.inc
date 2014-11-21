<?php
/**
 * @file
 * vih_viggo.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function vih_viggo_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'viggo_calendar';
  $feeds_importer->config = array(
    'name' => 'Viggo Kalender',
    'description' => 'Imports calendar items from Viggo.',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => 0,
        'use_pubsubhubbub' => 0,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'auto_scheme' => 'http',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'DateIcalIcalcreatorParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '31536000',
        'author' => '1',
        'mappings' => array(
          0 => array(
            'source' => 'SUMMARY',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'DESCRIPTION',
            'target' => 'viggo_imported_text',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'DTSTART',
            'target' => 'field_date:start',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'DTEND',
            'target' => 'field_date:end',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'UID',
            'target' => 'guid',
            'unique' => 1,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'viggo_imported_text',
        'bundle' => 'vih_calendar',
        'authorize' => 0,
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '86400',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['viggo_calendar'] = $feeds_importer;

  return $export;
}
