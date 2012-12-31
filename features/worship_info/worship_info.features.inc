<?php
/**
 * @file
 * worship_info.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function worship_info_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function worship_info_node_info() {
  $items = array(
    'worship_info' => array(
      'name' => t('Worship info'),
      'base' => 'node_content',
      'description' => t('Date, bulletin, preacher, sermon topic, sermon text, sermon video associated with worship service(s)'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
