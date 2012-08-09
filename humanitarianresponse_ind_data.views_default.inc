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
  $view->description = '';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_ind_date' => 'field_ind_date',
    'field_cluster' => 'field_cluster',
    'field_ind_def' => 'field_ind_def',
    'field_locations' => 'field_locations',
    'field_ind_need' => 'field_ind_need',
    'field_ind_target' => 'field_ind_target',
    'field_ind_coverage' => 'field_ind_coverage',
    'field_ind_need_explanation' => 'field_ind_need_explanation',
    'field_ind_cov_explanation' => 'field_ind_cov_explanation',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
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
    'field_cluster' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
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
    'field_locations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ind_need' => array(
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
    'field_ind_coverage' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ind_need_explanation' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ind_cov_explanation' => array(
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
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_ind_date']['id'] = 'field_ind_date';
  $handler->display->display_options['fields']['field_ind_date']['table'] = 'field_data_field_ind_date';
  $handler->display->display_options['fields']['field_ind_date']['field'] = 'field_ind_date';
  $handler->display->display_options['fields']['field_ind_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ind_date']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_ind_date']['alter']['path'] = 'node/[nid]';
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
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_ind_date']['field_api_classes'] = 0;
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
  $handler->display->display_options['fields']['field_cluster']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_cluster']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cluster']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_cluster']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cluster']['hide_alter_empty'] = 1;
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
  $handler->display->display_options['fields']['field_locations']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_locations']['settings'] = array(
    'click_to_edit' => 1,
    'empty_text' => '',
    'fallback_format' => 'hs_taxonomy_term_reference_hierarchical_text',
  );
  $handler->display->display_options['fields']['field_locations']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_locations']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_locations']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_locations']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_locations']['field_api_classes'] = 0;
  /* Field: Content: Need: Best Estimate */
  $handler->display->display_options['fields']['field_ind_need']['id'] = 'field_ind_need';
  $handler->display->display_options['fields']['field_ind_need']['table'] = 'field_data_field_ind_need';
  $handler->display->display_options['fields']['field_ind_need']['field'] = 'field_ind_need';
  $handler->display->display_options['fields']['field_ind_need']['group_type'] = 'sum';
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
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '0',
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
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_ind_coverage']['field_api_classes'] = 0;
  /* Field: Content: Need: Explanation */
  $handler->display->display_options['fields']['field_ind_need_explanation']['id'] = 'field_ind_need_explanation';
  $handler->display->display_options['fields']['field_ind_need_explanation']['table'] = 'field_data_field_ind_need_explanation';
  $handler->display->display_options['fields']['field_ind_need_explanation']['field'] = 'field_ind_need_explanation';
  $handler->display->display_options['fields']['field_ind_need_explanation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ind_need_explanation']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ind_need_explanation']['field_api_classes'] = 0;
  /* Field: Content: Coverage: Explanation */
  $handler->display->display_options['fields']['field_ind_cov_explanation']['id'] = 'field_ind_cov_explanation';
  $handler->display->display_options['fields']['field_ind_cov_explanation']['table'] = 'field_data_field_ind_cov_explanation';
  $handler->display->display_options['fields']['field_ind_cov_explanation']['field'] = 'field_ind_cov_explanation';
  $handler->display->display_options['fields']['field_ind_cov_explanation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['field_api_classes'] = 0;
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
  $handler->display->display_options['filters']['field_locations_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_locations_tid']['vocabulary'] = 'locations';
  $handler->display->display_options['filters']['field_locations_tid']['error_message'] = 1;
  /* Filter criterion: Content: Indicator (field_ind_def) */
  $handler->display->display_options['filters']['field_ind_def_nid']['id'] = 'field_ind_def_nid';
  $handler->display->display_options['filters']['field_ind_def_nid']['table'] = 'field_data_field_ind_def';
  $handler->display->display_options['filters']['field_ind_def_nid']['field'] = 'field_ind_def_nid';
  $handler->display->display_options['filters']['field_ind_def_nid']['value'] = array(
    'all' => 'all',
    10 => '10',
    7 => '7',
    8 => '8',
    11 => '11',
    9 => '9',
    6 => '6',
  );
  $handler->display->display_options['filters']['field_ind_def_nid']['group'] = 1;
  $handler->display->display_options['filters']['field_ind_def_nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ind_def_nid']['expose']['operator_id'] = 'field_ind_def_nid_op';
  $handler->display->display_options['filters']['field_ind_def_nid']['expose']['label'] = 'Indicator';
  $handler->display->display_options['filters']['field_ind_def_nid']['expose']['operator'] = 'field_ind_def_nid_op';
  $handler->display->display_options['filters']['field_ind_def_nid']['expose']['identifier'] = 'field_ind_def_nid';
  $handler->display->display_options['filters']['field_ind_def_nid']['expose']['reduce'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'indicator_data' => 'indicator_data',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Download link';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<div style="align:right">
   Download: <a href="/export/indicator_data.xls"><img src="/sites/all/modules/views_data_export/images/xls.png" alt="Excel File"></a> <a href="/export/indicator_data.csv"><img src="/sites/all/modules/views_data_export/images/csv.png" alt="CSV File"></a> <a href="/export/indicator_data.xml"><img src="/sites/all/modules/views_data_export/images/xml.png" alt="XML File"></a>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_ind_date']['id'] = 'field_ind_date';
  $handler->display->display_options['fields']['field_ind_date']['table'] = 'field_data_field_ind_date';
  $handler->display->display_options['fields']['field_ind_date']['field'] = 'field_ind_date';
  $handler->display->display_options['fields']['field_ind_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ind_date']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_ind_date']['alter']['path'] = 'node/[nid]';
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
  $handler->display->display_options['fields']['field_cluster']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_cluster']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cluster']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_cluster']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cluster']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_cluster']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'taxonomy_term_reference_link',
  );
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
  $handler->display->display_options['fields']['field_locations']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_locations']['settings'] = array(
    'click_to_edit' => 1,
    'empty_text' => '',
    'fallback_format' => 'hs_taxonomy_term_reference_hierarchical_text',
  );
  $handler->display->display_options['fields']['field_locations']['group_rows'] = 1;
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
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
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
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
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
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_ind_coverage']['field_api_classes'] = 0;
  /* Field: Content: Need: Explanation */
  $handler->display->display_options['fields']['field_ind_need_explanation']['id'] = 'field_ind_need_explanation';
  $handler->display->display_options['fields']['field_ind_need_explanation']['table'] = 'field_data_field_ind_need_explanation';
  $handler->display->display_options['fields']['field_ind_need_explanation']['field'] = 'field_ind_need_explanation';
  $handler->display->display_options['fields']['field_ind_need_explanation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ind_need_explanation']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ind_need_explanation']['field_api_classes'] = 0;
  /* Field: Content: Coverage: Explanation */
  $handler->display->display_options['fields']['field_ind_cov_explanation']['id'] = 'field_ind_cov_explanation';
  $handler->display->display_options['fields']['field_ind_cov_explanation']['table'] = 'field_data_field_ind_cov_explanation';
  $handler->display->display_options['fields']['field_ind_cov_explanation']['field'] = 'field_ind_cov_explanation';
  $handler->display->display_options['fields']['field_ind_cov_explanation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['field_api_classes'] = 0;
  $handler->display->display_options['path'] = 'crf/indicator-data';
  $handler->display->display_options['menu']['title'] = 'Table';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Charts */
  $handler = $view->new_display('page', 'Charts', 'page_1');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['field_ind_def']['field_api_classes'] = 0;
  /* Field: Content: Need: Best Estimate */
  $handler->display->display_options['fields']['field_ind_need']['id'] = 'field_ind_need';
  $handler->display->display_options['fields']['field_ind_need']['table'] = 'field_data_field_ind_need';
  $handler->display->display_options['fields']['field_ind_need']['field'] = 'field_ind_need';
  $handler->display->display_options['fields']['field_ind_need']['group_type'] = 'sum';
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
  $handler->display->display_options['fields']['field_ind_need']['type'] = 'number_unformatted';
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
  $handler->display->display_options['fields']['field_ind_target']['group_type'] = 'sum';
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
  $handler->display->display_options['fields']['field_ind_target']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_ind_target']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_ind_target']['field_api_classes'] = 0;
  /* Field: Content: Coverage: Best Estimate */
  $handler->display->display_options['fields']['field_ind_coverage']['id'] = 'field_ind_coverage';
  $handler->display->display_options['fields']['field_ind_coverage']['table'] = 'field_data_field_ind_coverage';
  $handler->display->display_options['fields']['field_ind_coverage']['field'] = 'field_ind_coverage';
  $handler->display->display_options['fields']['field_ind_coverage']['group_type'] = 'sum';
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
  $handler->display->display_options['fields']['field_ind_coverage']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_ind_coverage']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_ind_coverage']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['filters']['field_cluster_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_cluster_tid']['expose']['operator_id'] = 'field_cluster_tid_op';
  $handler->display->display_options['filters']['field_cluster_tid']['expose']['label'] = 'Cluster (field_cluster)';
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
  $handler->display->display_options['filters']['field_locations_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_locations_tid']['expose']['operator_id'] = 'field_locations_tid_op';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['label'] = 'Geographic Location (field_locations)';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['operator'] = 'field_locations_tid_op';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['identifier'] = 'field_locations_tid';
  $handler->display->display_options['filters']['field_locations_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_locations_tid']['reduce_duplicates'] = 0;
  $handler->display->display_options['filters']['field_locations_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_locations_tid']['vocabulary'] = 'locations';
  $handler->display->display_options['filters']['field_locations_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_locations_tid']['error_message'] = 1;
  $handler->display->display_options['path'] = 'crf/indicator-data/charts';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Graphs';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_ind_date']['id'] = 'field_ind_date';
  $handler->display->display_options['fields']['field_ind_date']['table'] = 'field_data_field_ind_date';
  $handler->display->display_options['fields']['field_ind_date']['field'] = 'field_ind_date';
  $handler->display->display_options['fields']['field_ind_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ind_date']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_ind_date']['alter']['path'] = 'node/[nid]';
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
  $handler->display->display_options['fields']['field_cluster']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_cluster']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cluster']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_cluster']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cluster']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_cluster']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'taxonomy_term_reference_link',
  );
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
  $handler->display->display_options['fields']['field_locations']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_locations']['settings'] = array(
    'click_to_edit' => 1,
    'empty_text' => '',
    'fallback_format' => 'hs_taxonomy_term_reference_hierarchical_text',
  );
  $handler->display->display_options['fields']['field_locations']['group_rows'] = 1;
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
  $handler->display->display_options['fields']['field_ind_need']['type'] = 'editable';
  $handler->display->display_options['fields']['field_ind_need']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'number_decimal',
    'fallback_settings' => array(
      'thousand_separator' => '',
      'decimal_separator' => '.',
      'scale' => '2',
      'prefix_suffix' => 0,
    ),
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
  $handler->display->display_options['fields']['field_ind_target']['type'] = 'editable';
  $handler->display->display_options['fields']['field_ind_target']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'number_decimal',
    'fallback_settings' => array(
      'thousand_separator' => '',
      'decimal_separator' => '.',
      'scale' => '2',
      'prefix_suffix' => 0,
    ),
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
  $handler->display->display_options['fields']['field_ind_coverage']['type'] = 'editable';
  $handler->display->display_options['fields']['field_ind_coverage']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'number_decimal',
    'fallback_settings' => array(
      'thousand_separator' => '',
      'decimal_separator' => '.',
      'scale' => '2',
      'prefix_suffix' => 0,
    ),
  );
  $handler->display->display_options['fields']['field_ind_coverage']['field_api_classes'] = 0;
  /* Field: Content: Need: Explanation */
  $handler->display->display_options['fields']['field_ind_need_explanation']['id'] = 'field_ind_need_explanation';
  $handler->display->display_options['fields']['field_ind_need_explanation']['table'] = 'field_data_field_ind_need_explanation';
  $handler->display->display_options['fields']['field_ind_need_explanation']['field'] = 'field_ind_need_explanation';
  $handler->display->display_options['fields']['field_ind_need_explanation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ind_need_explanation']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ind_need_explanation']['field_api_classes'] = 0;
  /* Field: Content: Coverage: Explanation */
  $handler->display->display_options['fields']['field_ind_cov_explanation']['id'] = 'field_ind_cov_explanation';
  $handler->display->display_options['fields']['field_ind_cov_explanation']['table'] = 'field_data_field_ind_cov_explanation';
  $handler->display->display_options['fields']['field_ind_cov_explanation']['field'] = 'field_ind_cov_explanation';
  $handler->display->display_options['fields']['field_ind_cov_explanation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['field_api_classes'] = 0;
  $handler->display->display_options['path'] = 'crf/indicator-data/edit';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_3');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Download link';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<div style="align:right">
   Download: <a href="/export/indicator_data.xls"><img src="/sites/all/modules/views_data_export/images/xls.png" alt="Excel File"></a> <a href="/export/indicator_data.csv"><img src="/sites/all/modules/views_data_export/images/csv.png" alt="CSV File"></a> <a href="/export/indicator_data.xml"><img src="/sites/all/modules/views_data_export/images/xml.png" alt="XML File"></a>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_ind_date']['id'] = 'field_ind_date';
  $handler->display->display_options['fields']['field_ind_date']['table'] = 'field_data_field_ind_date';
  $handler->display->display_options['fields']['field_ind_date']['field'] = 'field_ind_date';
  $handler->display->display_options['fields']['field_ind_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ind_date']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_ind_date']['alter']['path'] = 'node/[nid]';
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
  $handler->display->display_options['fields']['field_cluster']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_cluster']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cluster']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_cluster']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cluster']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_cluster']['settings'] = array(
    'click_to_edit' => 0,
    'empty_text' => '',
    'fallback_format' => 'taxonomy_term_reference_link',
  );
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
  $handler->display->display_options['fields']['field_locations']['type'] = 'hs_taxonomy_term_reference_hierarchical_text';
  $handler->display->display_options['fields']['field_locations']['settings'] = array(
    'click_to_edit' => 1,
    'empty_text' => '',
    'fallback_format' => 'hs_taxonomy_term_reference_hierarchical_text',
  );
  $handler->display->display_options['fields']['field_locations']['group_rows'] = 1;
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
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
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
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
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
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_ind_coverage']['field_api_classes'] = 0;
  /* Field: Content: Need: Explanation */
  $handler->display->display_options['fields']['field_ind_need_explanation']['id'] = 'field_ind_need_explanation';
  $handler->display->display_options['fields']['field_ind_need_explanation']['table'] = 'field_data_field_ind_need_explanation';
  $handler->display->display_options['fields']['field_ind_need_explanation']['field'] = 'field_ind_need_explanation';
  $handler->display->display_options['fields']['field_ind_need_explanation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ind_need_explanation']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ind_need_explanation']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ind_need_explanation']['field_api_classes'] = 0;
  /* Field: Content: Coverage: Explanation */
  $handler->display->display_options['fields']['field_ind_cov_explanation']['id'] = 'field_ind_cov_explanation';
  $handler->display->display_options['fields']['field_ind_cov_explanation']['table'] = 'field_data_field_ind_cov_explanation';
  $handler->display->display_options['fields']['field_ind_cov_explanation']['field'] = 'field_ind_cov_explanation';
  $handler->display->display_options['fields']['field_ind_cov_explanation']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ind_cov_explanation']['field_api_classes'] = 0;
  $handler->display->display_options['path'] = 'crf/indicator-data/table';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Table';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';
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
    t('Date'),
    t('node/[nid]'),
    t('Cluster'),
    t('Indicator'),
    t('Geographic Location'),
    t('Need: Best Estimate'),
    t('Current Target'),
    t('Coverage: Best Estimate'),
    t('Need: Explanation'),
    t('Coverage: Explanation'),
    t('Page'),
    t('Download link'),
    t('<div style="align:right">
   Download: <a href="/export/indicator_data.xls"><img src="/sites/all/modules/views_data_export/images/xls.png" alt="Excel File"></a> <a href="/export/indicator_data.csv"><img src="/sites/all/modules/views_data_export/images/csv.png" alt="CSV File"></a> <a href="/export/indicator_data.xml"><img src="/sites/all/modules/views_data_export/images/xml.png" alt="XML File"></a>
</div>'),
    t('Charts'),
    t('Cluster (field_cluster)'),
    t('Geographic Location (field_locations)'),
  );
  $export['indicator_data'] = $view;

  $view = new view;
  $view->name = 'indicator_data_export';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Indicator Data Export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'indicator_data';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Geographic Location (field_locations) */
  $handler->display->display_options['relationships']['field_locations_tid']['id'] = 'field_locations_tid';
  $handler->display->display_options['relationships']['field_locations_tid']['table'] = 'field_data_field_locations';
  $handler->display->display_options['relationships']['field_locations_tid']['field'] = 'field_locations_tid';
  $handler->display->display_options['relationships']['field_locations_tid']['required'] = 0;
  /* Field: Content: Cluster */
  $handler->display->display_options['fields']['field_cluster']['id'] = 'field_cluster';
  $handler->display->display_options['fields']['field_cluster']['table'] = 'field_data_field_cluster';
  $handler->display->display_options['fields']['field_cluster']['field'] = 'field_cluster';
  $handler->display->display_options['fields']['field_cluster']['label'] = 'cluster';
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
  $handler->display->display_options['fields']['field_cluster']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_cluster']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cluster']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_cluster']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cluster']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_cluster']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_cluster']['field_api_classes'] = 0;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_ind_date']['id'] = 'field_ind_date';
  $handler->display->display_options['fields']['field_ind_date']['table'] = 'field_data_field_ind_date';
  $handler->display->display_options['fields']['field_ind_date']['field'] = 'field_ind_date';
  $handler->display->display_options['fields']['field_ind_date']['label'] = 'date';
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
  $handler->display->display_options['fields']['field_ind_date']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_ind_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ind_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ind_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ind_date']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ind_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_ind_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_ind_date']['field_api_classes'] = 0;
  /* Field: Content: Indicator */
  $handler->display->display_options['fields']['field_ind_def_1']['id'] = 'field_ind_def_1';
  $handler->display->display_options['fields']['field_ind_def_1']['table'] = 'field_data_field_ind_def';
  $handler->display->display_options['fields']['field_ind_def_1']['field'] = 'field_ind_def';
  $handler->display->display_options['fields']['field_ind_def_1']['label'] = 'indicator_id';
  $handler->display->display_options['fields']['field_ind_def_1']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_ind_def_1']['alter']['text'] = 'IND-[field_ind_def_1-nid]';
  $handler->display->display_options['fields']['field_ind_def_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ind_def_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ind_def_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ind_def_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ind_def_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ind_def_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ind_def_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ind_def_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ind_def_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ind_def_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ind_def_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ind_def_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ind_def_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_ind_def_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ind_def_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ind_def_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ind_def_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ind_def_1']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_ind_def_1']['field_api_classes'] = 0;
  /* Field: Content: Indicator */
  $handler->display->display_options['fields']['field_ind_def']['id'] = 'field_ind_def';
  $handler->display->display_options['fields']['field_ind_def']['table'] = 'field_data_field_ind_def';
  $handler->display->display_options['fields']['field_ind_def']['field'] = 'field_ind_def';
  $handler->display->display_options['fields']['field_ind_def']['label'] = 'indicator';
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
  $handler->display->display_options['fields']['field_ind_def']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_ind_def']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ind_def']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ind_def']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ind_def']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ind_def']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_ind_def']['field_api_classes'] = 0;
  /* Field: Taxonomy term: PCode */
  $handler->display->display_options['fields']['field_location_pcode']['id'] = 'field_location_pcode';
  $handler->display->display_options['fields']['field_location_pcode']['table'] = 'field_data_field_location_pcode';
  $handler->display->display_options['fields']['field_location_pcode']['field'] = 'field_location_pcode';
  $handler->display->display_options['fields']['field_location_pcode']['relationship'] = 'field_locations_tid';
  $handler->display->display_options['fields']['field_location_pcode']['label'] = 'pcode';
  $handler->display->display_options['fields']['field_location_pcode']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_location_pcode']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_location_pcode']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_location_pcode']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_location_pcode']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_location_pcode']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_location_pcode']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_location_pcode']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_location_pcode']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_location_pcode']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_location_pcode']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_location_pcode']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_location_pcode']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_location_pcode']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_location_pcode']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_location_pcode']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_location_pcode']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_location_pcode']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_location_pcode']['field_api_classes'] = 0;
  /* Field: Content: Geographic Location */
  $handler->display->display_options['fields']['field_locations']['id'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['table'] = 'field_data_field_locations';
  $handler->display->display_options['fields']['field_locations']['field'] = 'field_locations';
  $handler->display->display_options['fields']['field_locations']['label'] = 'location';
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
  $handler->display->display_options['fields']['field_locations']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_locations']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_locations']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_locations']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_locations']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_locations']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_locations']['field_api_classes'] = 0;
  /* Field: Content: Need: Best Estimate */
  $handler->display->display_options['fields']['field_ind_need']['id'] = 'field_ind_need';
  $handler->display->display_options['fields']['field_ind_need']['table'] = 'field_data_field_ind_need';
  $handler->display->display_options['fields']['field_ind_need']['field'] = 'field_ind_need';
  $handler->display->display_options['fields']['field_ind_need']['label'] = 'need';
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
  $handler->display->display_options['fields']['field_ind_need']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_ind_need']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ind_need']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ind_need']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ind_need']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ind_need']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_ind_need']['field_api_classes'] = 0;
  /* Field: Content: Current Target */
  $handler->display->display_options['fields']['field_ind_target']['id'] = 'field_ind_target';
  $handler->display->display_options['fields']['field_ind_target']['table'] = 'field_data_field_ind_target';
  $handler->display->display_options['fields']['field_ind_target']['field'] = 'field_ind_target';
  $handler->display->display_options['fields']['field_ind_target']['label'] = 'target';
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
  $handler->display->display_options['fields']['field_ind_target']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_ind_target']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ind_target']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ind_target']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ind_target']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ind_target']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_ind_target']['field_api_classes'] = 0;
  /* Field: Content: Coverage: Best Estimate */
  $handler->display->display_options['fields']['field_ind_coverage']['id'] = 'field_ind_coverage';
  $handler->display->display_options['fields']['field_ind_coverage']['table'] = 'field_data_field_ind_coverage';
  $handler->display->display_options['fields']['field_ind_coverage']['field'] = 'field_ind_coverage';
  $handler->display->display_options['fields']['field_ind_coverage']['label'] = 'coverage';
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
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_ind_coverage']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Cluster (field_cluster) */
  $handler->display->display_options['arguments']['field_cluster_tid']['id'] = 'field_cluster_tid';
  $handler->display->display_options['arguments']['field_cluster_tid']['table'] = 'field_data_field_cluster';
  $handler->display->display_options['arguments']['field_cluster_tid']['field'] = 'field_cluster_tid';
  $handler->display->display_options['arguments']['field_cluster_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_cluster_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['field_cluster_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_cluster_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_cluster_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_cluster_tid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_cluster_tid']['not'] = 0;
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

  /* Display: XLS Export */
  $handler = $view->new_display('views_data_export', 'XLS Export', 'views_data_export_1');

  /* Display: XML Export */
  $handler = $view->new_display('views_data_export', 'XML Export', 'views_data_export_2');

  /* Display: CSV Export */
  $handler = $view->new_display('views_data_export', 'CSV Export', 'views_data_export_3');
  $translatables['indicator_data_export'] = array(
    t('Master'),
    t('indicator_data'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('term from field_locations'),
    t('cluster'),
    t('date'),
    t('indicator_id'),
    t('IND-[field_ind_def_1-nid]'),
    t('indicator'),
    t('pcode'),
    t('location'),
    t('need'),
    t('target'),
    t('coverage'),
    t('All'),
    t('XLS Export'),
    t('XML Export'),
    t('CSV Export'),
  );
  $export['indicator_data_export'] = $view;

  return $export;
}
