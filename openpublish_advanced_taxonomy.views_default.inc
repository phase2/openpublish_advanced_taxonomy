<?php
/**
 * @file
 * openpublish_advanced_taxonomy.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function openpublish_advanced_taxonomy_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'openpublish_advanced_taxonomy';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_openpublish_node_index';
  $view->human_name = 'openpublish_advanced_taxonomy';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* Field: Node: Item language */
  $handler->display->display_options['fields']['search_api_language']['id'] = 'search_api_language';
  $handler->display->display_options['fields']['search_api_language']['table'] = 'search_api_index_openpublish_node_index';
  $handler->display->display_options['fields']['search_api_language']['field'] = 'search_api_language';
  /* Contextual filter: Node: Taxonomy Terms Tid */
  $handler->display->display_options['arguments']['search_api_node_taxonomy_list_tid']['id'] = 'search_api_node_taxonomy_list_tid';
  $handler->display->display_options['arguments']['search_api_node_taxonomy_list_tid']['table'] = 'search_api_index_openpublish_node_index';
  $handler->display->display_options['arguments']['search_api_node_taxonomy_list_tid']['field'] = 'search_api_node_taxonomy_list_tid';
  $handler->display->display_options['arguments']['search_api_node_taxonomy_list_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['search_api_node_taxonomy_list_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['search_api_node_taxonomy_list_tid']['default_argument_options']['term_page'] = 1;
  $handler->display->display_options['arguments']['search_api_node_taxonomy_list_tid']['default_argument_options']['node'] = 0;
  $handler->display->display_options['arguments']['search_api_node_taxonomy_list_tid']['default_argument_options']['limit'] = 0;
  $handler->display->display_options['arguments']['search_api_node_taxonomy_list_tid']['default_argument_options']['vocabularies'] = array(
    'blog' => 0,
    'sections' => 0,
  );
  $handler->display->display_options['arguments']['search_api_node_taxonomy_list_tid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['search_api_node_taxonomy_list_tid']['summary']['format'] = 'default_summary';

  /* Display: General */
  $handler = $view->new_display('block', 'General', 'block_1');
  $export['openpublish_advanced_taxonomy'] = $view;

  return $export;
}
