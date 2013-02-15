<?php
/**
 * @file
 * hr_indicator_data.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function hr_indicator_data_views_default_views() {
  $export = array();

  $view = new view();
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
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
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
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_indicator_data_node']['id'] = 'reverse_field_indicator_data_node';
  $handler->display->display_options['relationships']['reverse_field_indicator_data_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_indicator_data_node']['field'] = 'reverse_field_indicator_data_node';
  $handler->display->display_options['relationships']['reverse_field_indicator_data_node']['label'] = 'Indicator Values referenced from field_indicator_data';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ind_def_target_id']['id'] = 'field_ind_def_target_id';
  $handler->display->display_options['relationships']['field_ind_def_target_id']['table'] = 'field_data_field_ind_def';
  $handler->display->display_options['relationships']['field_ind_def_target_id']['field'] = 'field_ind_def_target_id';
  $handler->display->display_options['relationships']['field_ind_def_target_id']['label'] = 'Indicator Definition referenced from field_ind_def';
  /* Field: Content: Cluster */
  $handler->display->display_options['fields']['field_cluster']['id'] = 'field_cluster';
  $handler->display->display_options['fields']['field_cluster']['table'] = 'field_data_field_cluster';
  $handler->display->display_options['fields']['field_cluster']['field'] = 'field_cluster';
  $handler->display->display_options['fields']['field_cluster']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cluster']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Indicator */
  $handler->display->display_options['fields']['field_ind_def']['id'] = 'field_ind_def';
  $handler->display->display_options['fields']['field_ind_def']['table'] = 'field_data_field_ind_def';
  $handler->display->display_options['fields']['field_ind_def']['field'] = 'field_ind_def';
  $handler->display->display_options['fields']['field_ind_def']['element_label_colon'] = FALSE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_locations']['id'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['table'] = 'field_data_field_locations';
  $handler->display->display_options['fields']['field_locations']['field'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_locations']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_locations']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_locations']['delta_offset'] = '0';
  /* Field: Content: Need: Best Estimate */
  $handler->display->display_options['fields']['field_ind_need']['id'] = 'field_ind_need';
  $handler->display->display_options['fields']['field_ind_need']['table'] = 'field_data_field_ind_need';
  $handler->display->display_options['fields']['field_ind_need']['field'] = 'field_ind_need';
  $handler->display->display_options['fields']['field_ind_need']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ind_need']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Current Target */
  $handler->display->display_options['fields']['field_ind_target']['id'] = 'field_ind_target';
  $handler->display->display_options['fields']['field_ind_target']['table'] = 'field_data_field_ind_target';
  $handler->display->display_options['fields']['field_ind_target']['field'] = 'field_ind_target';
  $handler->display->display_options['fields']['field_ind_target']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ind_target']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Coverage: Best Estimate */
  $handler->display->display_options['fields']['field_ind_coverage']['id'] = 'field_ind_coverage';
  $handler->display->display_options['fields']['field_ind_coverage']['table'] = 'field_data_field_ind_coverage';
  $handler->display->display_options['fields']['field_ind_coverage']['field'] = 'field_ind_coverage';
  $handler->display->display_options['fields']['field_ind_coverage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ind_coverage']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_ind_date']['id'] = 'field_ind_date';
  $handler->display->display_options['fields']['field_ind_date']['table'] = 'field_data_field_ind_date';
  $handler->display->display_options['fields']['field_ind_date']['field'] = 'field_ind_date';
  $handler->display->display_options['fields']['field_ind_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ind_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
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
  $handler->display->display_options['filters']['field_cluster_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_cluster_tid']['vocabulary'] = 'clusters';
  /* Filter criterion: Content: Location (field_locations) */
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
  $handler->display->display_options['filters']['field_locations_tid']['vocabulary'] = 'locations';
  $handler->display->display_options['filters']['field_locations_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Request (field_crf_request) */
  $handler->display->display_options['filters']['field_crf_request_target_id']['id'] = 'field_crf_request_target_id';
  $handler->display->display_options['filters']['field_crf_request_target_id']['table'] = 'field_data_field_crf_request';
  $handler->display->display_options['filters']['field_crf_request_target_id']['field'] = 'field_crf_request_target_id';
  $handler->display->display_options['filters']['field_crf_request_target_id']['relationship'] = 'reverse_field_indicator_data_node';
  $handler->display->display_options['filters']['field_crf_request_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_crf_request_target_id']['expose']['operator_id'] = 'field_crf_request_target_id_op';
  $handler->display->display_options['filters']['field_crf_request_target_id']['expose']['label'] = 'Request';
  $handler->display->display_options['filters']['field_crf_request_target_id']['expose']['operator'] = 'field_crf_request_target_id_op';
  $handler->display->display_options['filters']['field_crf_request_target_id']['expose']['identifier'] = 'field_crf_request_target_id';
  $handler->display->display_options['filters']['field_crf_request_target_id']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_crf_request_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    218860149 => 0,
    200153887 => 0,
    52310416 => 0,
    30037204 => 0,
  );
  /* Filter criterion: Content: Indicator (field_ind_def) */
  $handler->display->display_options['filters']['field_ind_def_target_id']['id'] = 'field_ind_def_target_id';
  $handler->display->display_options['filters']['field_ind_def_target_id']['table'] = 'field_data_field_ind_def';
  $handler->display->display_options['filters']['field_ind_def_target_id']['field'] = 'field_ind_def_target_id';
  $handler->display->display_options['filters']['field_ind_def_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ind_def_target_id']['expose']['operator_id'] = 'field_ind_def_target_id_op';
  $handler->display->display_options['filters']['field_ind_def_target_id']['expose']['label'] = 'Indicator';
  $handler->display->display_options['filters']['field_ind_def_target_id']['expose']['operator'] = 'field_ind_def_target_id_op';
  $handler->display->display_options['filters']['field_ind_def_target_id']['expose']['identifier'] = 'field_ind_def_target_id';
  $handler->display->display_options['filters']['field_ind_def_target_id']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_ind_def_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    218860149 => 0,
    200153887 => 0,
    52310416 => 0,
    30037204 => 0,
  );
  /* Filter criterion: Content: Cluster Objective (field_cluster_obj) */
  $handler->display->display_options['filters']['field_cluster_obj_target_id']['id'] = 'field_cluster_obj_target_id';
  $handler->display->display_options['filters']['field_cluster_obj_target_id']['table'] = 'field_data_field_cluster_obj';
  $handler->display->display_options['filters']['field_cluster_obj_target_id']['field'] = 'field_cluster_obj_target_id';
  $handler->display->display_options['filters']['field_cluster_obj_target_id']['relationship'] = 'field_ind_def_target_id';
  $handler->display->display_options['filters']['field_cluster_obj_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_cluster_obj_target_id']['expose']['operator_id'] = 'field_cluster_obj_target_id_op';
  $handler->display->display_options['filters']['field_cluster_obj_target_id']['expose']['label'] = 'Cluster Objective';
  $handler->display->display_options['filters']['field_cluster_obj_target_id']['expose']['operator'] = 'field_cluster_obj_target_id_op';
  $handler->display->display_options['filters']['field_cluster_obj_target_id']['expose']['identifier'] = 'field_cluster_obj_target_id';
  $handler->display->display_options['filters']['field_cluster_obj_target_id']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_cluster_obj_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    218860149 => 0,
    200153887 => 0,
    52310416 => 0,
    30037204 => 0,
  );
  /* Filter criterion: Workbench Moderation: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'reverse_field_indicator_data_node';
  $handler->display->display_options['filters']['state']['exposed'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['operator_id'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['label'] = 'State';
  $handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
  $handler->display->display_options['filters']['state']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    218860149 => 0,
    200153887 => 0,
    52310416 => 0,
    30037204 => 0,
  );

  /* Display: Table */
  $handler = $view->new_display('block', 'Table', 'table');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;

  /* Display: Graph */
  $handler = $view->new_display('block', 'Graph', 'graph');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
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
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Indicator Values referenced from field_indicator_data'),
    t('Indicator Definition referenced from field_ind_def'),
    t('Cluster'),
    t('Indicator'),
    t('Location'),
    t('Need: Best Estimate'),
    t('Current Target'),
    t('Coverage: Best Estimate'),
    t('Date'),
    t('Geographic Location'),
    t('Request'),
    t('Cluster Objective'),
    t('State'),
    t('Table'),
    t('Graph'),
  );
  $export['indicator_data'] = $view;

  return $export;
}
