<?php
/**
 * @file
 * worship_info.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function worship_info_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_worship_info';
  $strongarm->value = '<?php

$wrapper = entity_metadata_wrapper(\'node\', $node);
$special = $wrapper->field_special_worship->value();
if (isset($special)) {
    $special = \'_\' . strtolower(preg_replace(\'/[^a-zA-Z0-9]+/\', \'_\', $special));
} else {
    $special = \'\';
}

print format_date($wrapper->field_date->value() - (strtotime(date("M d Y H:i:s")) - strtotime(gmdate("M d Y H:i:s"))), \'custom\', \'Ymd\', NULL) . $special;

?>';
  $export['ant_pattern_worship_info'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_worship_info';
  $strongarm->value = 1;
  $export['ant_php_worship_info'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_worship_info';
  $strongarm->value = '1';
  $export['ant_worship_info'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_worship_info';
  $strongarm->value = 0;
  $export['comment_anonymous_worship_info'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_worship_info';
  $strongarm->value = 1;
  $export['comment_default_mode_worship_info'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_worship_info';
  $strongarm->value = '50';
  $export['comment_default_per_page_worship_info'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_worship_info';
  $strongarm->value = 1;
  $export['comment_form_location_worship_info'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_worship_info';
  $strongarm->value = '0';
  $export['comment_preview_worship_info'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_worship_info';
  $strongarm->value = 1;
  $export['comment_subject_field_worship_info'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_worship_info';
  $strongarm->value = '0';
  $export['comment_worship_info'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__worship_info';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__worship_info'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_worship_info';
  $strongarm->value = array();
  $export['menu_options_worship_info'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_worship_info';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_worship_info'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_worship_info';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_worship_info'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_worship_info';
  $strongarm->value = '0';
  $export['node_preview_worship_info'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_worship_info';
  $strongarm->value = 0;
  $export['node_submitted_worship_info'] = $strongarm;

  return $export;
}
