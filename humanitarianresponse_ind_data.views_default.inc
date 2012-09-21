<?php
/**
 * @file
 * humanitarianresponse_ind_data.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function humanitarianresponse_ind_data_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'indicator_data';
  $view->description = 'Indicator Data for a given date range';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Indicator Data';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Indicator Data';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 1;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_cluster' => 'field_cluster',
    'field_ind_coverage' => 'field_ind_coverage',
    'field_ind_target' => 'field_ind_target',
    'field_ind_date' => 'field_ind_date',
    'field_locations' => 'field_locations',
    'field_ind_def' => 'field_ind_def',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_cluster' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ind_coverage' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ind_target' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ind_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_locations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ind_def' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Content: Cluster */
  $handler->display->display_options['fields']['field_cluster']['id'] = 'field_cluster';
  $handler->display->display_options['fields']['field_cluster']['table'] = 'field_data_field_cluster';
  $handler->display->display_options['fields']['field_cluster']['field'] = 'field_cluster';
  $handler->display->display_options['fields']['field_cluster']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cluster']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cluster']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cluster']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cluster']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_cluster']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cluster']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_cluster']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cluster']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_cluster']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_cluster']['field_api_classes'] = 0;
  /* Field: Content: Indicator */
  $handler->display->display_options['fields']['field_ind_def']['id'] = 'field_ind_def';
  $handler->display->display_options['fields']['field_ind_def']['table'] = 'field_data_field_ind_def';
  $handler->display->display_options['fields']['field_ind_def']['field'] = 'field_ind_def';
  $handler->display->display_options['fields']['field_ind_def']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ind_def']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ind_def']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ind_def']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ind_def']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ind_def']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ind_def']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ind_def']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ind_def']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ind_def']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ind_def']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ind_def']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ind_def']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ind_def']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_ind_def']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ind_def']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ind_def']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ind_def']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ind_def']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_ind_def']['field_api_classes'] = 0;
  /* Field: Content: Geographic Location */
  $handler->display->display_options['fields']['field_locations']['id'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['table'] = 'field_data_field_locations';
  $handler->display->display_options['fields']['field_locations']['field'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_locations']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_locations']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_locations']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_locations']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_locations']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_locations']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_locations']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_locations']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_locations']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_locations']['group_rows'] = 0;
  $handler->display->display_options['fields']['field_locations']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_locations']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_locations']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_locations']['field_api_classes'] = 0;
  /* Field: Content: Need: Best Estimate */
  $handler->display->display_options['fields']['field_ind_need']['id'] = 'field_ind_need';
  $handler->display->display_options['fields']['field_ind_need']['table'] = 'field_data_field_ind_need';
  $handler->display->display_options['fields']['field_ind_need']['field'] = 'field_ind_need';
  $handler->display->display_options['fields']['field_ind_need']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ind_need']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ind_need']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ind_need']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ind_need']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ind_need']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ind_need']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ind_need']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ind_need']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ind_need']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ind_need']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ind_need']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ind_need']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ind_need']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_ind_need']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ind_need']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ind_need']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ind_need']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ind_need']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_ind_need']['field_api_classes'] = 0;
  /* Field: Content: Current Target */
  $handler->display->display_options['fields']['field_ind_target']['id'] = 'field_ind_target';
  $handler->display->display_options['fields']['field_ind_target']['table'] = 'field_data_field_ind_target';
  $handler->display->display_options['fields']['field_ind_target']['field'] = 'field_ind_target';
  $handler->display->display_options['fields']['field_ind_target']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ind_target']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ind_target']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ind_target']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ind_target']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ind_target']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ind_target']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ind_target']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ind_target']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ind_target']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ind_target']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ind_target']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ind_target']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ind_target']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_ind_target']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ind_target']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ind_target']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ind_target']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ind_target']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_ind_target']['field_api_classes'] = 0;
  /* Field: Content: Coverage: Best Estimate */
  $handler->display->display_options['fields']['field_ind_coverage']['id'] = 'field_ind_coverage';
  $handler->display->display_options['fields']['field_ind_coverage']['table'] = 'field_data_field_ind_coverage';
  $handler->display->display_options['fields']['field_ind_coverage']['field'] = 'field_ind_coverage';
  $handler->display->display_options['fields']['field_ind_coverage']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ind_coverage']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ind_coverage']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ind_coverage']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ind_coverage']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ind_coverage']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ind_coverage']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ind_coverage']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ind_coverage']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ind_coverage']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ind_coverage']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ind_coverage']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ind_coverage']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ind_coverage']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_ind_coverage']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ind_coverage']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ind_coverage']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ind_coverage']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ind_coverage']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_ind_coverage']['field_api_classes'] = 0;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_ind_date']['id'] = 'field_ind_date';
  $handler->display->display_options['fields']['field_ind_date']['table'] = 'field_data_field_ind_date';
  $handler->display->display_options['fields']['field_ind_date']['field'] = 'field_ind_date';
  $handler->display->display_options['fields']['field_ind_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ind_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ind_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ind_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ind_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ind_date']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ind_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ind_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ind_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ind_date']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ind_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ind_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ind_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ind_date']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_ind_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ind_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ind_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ind_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ind_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_ind_date']['field_api_classes'] = 0;
  /* Sort criterion: Content: Cluster (field_cluster) */
  $handler->display->display_options['sorts']['field_cluster_tid']['id'] = 'field_cluster_tid';
  $handler->display->display_options['sorts']['field_cluster_tid']['table'] = 'field_data_field_cluster';
  $handler->display->display_options['sorts']['field_cluster_tid']['field'] = 'field_cluster_tid';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'indicator_data' => 'indicator_data',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Cluster (field_cluster) */
  $handler->display->display_options['filters']['field_cluster_tid']['id'] = 'field_cluster_tid';
  $handler->display->display_options['filters']['field_cluster_tid']['table'] = 'field_data_field_cluster';
  $handler->display->display_options['filters']['field_cluster_tid']['field'] = 'field_cluster_tid';
  $handler->display->display_options['filters']['field_cluster_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_cluster_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_cluster_tid']['expose']['operator_id'] = 'field_cluster_tid_op';
  $handler->display->display_options['filters']['field_cluster_tid']['expose']['label'] = 'Cluster';
  $handler->display->display_options['filters']['field_cluster_tid']['expose']['operator'] = 'field_cluster_tid_op';
  $handler->display->display_options['filters']['field_cluster_tid']['expose']['identifier'] = 'field_cluster_tid';
  $handler->display->display_options['filters']['field_cluster_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_cluster_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_cluster_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_cluster_tid']['vocabulary'] = 'clusters';
  $handler->display->display_options['filters']['field_cluster_tid']['error_message'] = 1;
  /* Filter criterion: Content: Geographic Location (field_locations) */
  $handler->display->display_options['filters']['field_locations_tid']['id'] = 'field_locations_tid';
  $handler->display->display_options['filters']['field_locations_tid']['table'] = 'field_data_field_locations';
  $handler->display->display_options['filters']['field_locations_tid']['field'] = 'field_locations_tid';
  $handler->display->display_options['filters']['field_locations_tid']['value'] = '';
  $handler->display->display_options['filters']['field_locations_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_locations_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_locations_tid']['expose']['operator_id'] = 'field_locations_tid_op';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['label'] = 'Geographic Location';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['operator'] = 'field_locations_tid_op';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['identifier'] = 'field_locations_tid';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_locations_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_locations_tid']['vocabulary'] = 'locations';
  $handler->display->display_options['filters']['field_locations_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_locations_tid']['error_message'] = 1;

  /* Display: Table */
  $handler = $view->new_display('block', 'Table', 'table');

  /* Display: Graph */
  $handler = $view->new_display('block', 'Graph', 'graph');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'highcharts';
  $handler->display->display_options['style_options']['format']['chart_type'] = 'area';
  $handler->display->display_options['style_options']['format']['title'] = 'Indicator Data';
  $handler->display->display_options['style_options']['format']['legend_enabled'] = 'yes';
  $handler->display->display_options['style_options']['format']['swap_axes'] = 0;
  $handler->display->display_options['style_options']['y_axis']['reversed'] = 0;
  $handler->display->display_options['style_options']['x_axis']['dataset_data'] = array(
    'field_ind_need' => 'field_ind_need',
    'field_ind_target' => 'field_ind_target',
    'field_ind_coverage' => 'field_ind_coverage',
    'field_cluster' => 0,
    'field_ind_def' => 0,
    'field_locations' => 0,
    'field_ind_date' => 0,
  );
  $handler->display->display_options['style_options']['x_axis']['dataset_label'] = 'field_ind_date';
  $handler->display->display_options['style_options']['x_axis']['reversed'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $translatables['indicator_data'] = array(
    t('Master'),
    t('Indicator Data'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Cluster'),
    t('Indicator'),
    t('Geographic Location'),
    t('Need: Best Estimate'),
    t('Current Target'),
    t('Coverage: Best Estimate'),
    t('Date'),
    t('Table'),
    t('Graph'),
  );
  $export['indicator_data'] = $view;

  return $export;
}
