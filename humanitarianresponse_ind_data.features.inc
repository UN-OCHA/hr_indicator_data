<?php
/**
 * @file
 * humanitarianresponse_ind_data.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function humanitarianresponse_ind_data_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function humanitarianresponse_ind_data_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function humanitarianresponse_ind_data_node_info() {
  $items = array(
    'indicator_data' => array(
      'name' => t('Indicator Data Item'),
      'base' => 'node_content',
      'description' => t('Indicator Reporting Data'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
