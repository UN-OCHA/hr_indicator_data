<?php
/**
 * @file
 * hr_indicator_data.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hr_indicator_data_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function hr_indicator_data_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function hr_indicator_data_node_info() {
  $items = array(
    'indicator_data' => array(
      'name' => t('Indicator Value Item'),
      'base' => 'node_content',
      'description' => t('Indicator Reporting Data'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
