<?php
$view = new view();
$view->name = 'report_form_result';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'report_form';
$view->human_name = 'Report form';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Report form';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
  'cover_letter' => 'cover_letter',
  'name' => 'name',
  'filename' => 'filename',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'title' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'cover_letter' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'name' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'filename' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Relationship: Reports: file id on report form */
$handler->display->display_options['relationships']['fid']['id'] = 'fid';
$handler->display->display_options['relationships']['fid']['table'] = 'report_form';
$handler->display->display_options['relationships']['fid']['field'] = 'fid';
/* Relationship: Reports: Node id of report form */
$handler->display->display_options['relationships']['nid']['id'] = 'nid';
$handler->display->display_options['relationships']['nid']['table'] = 'report_form';
$handler->display->display_options['relationships']['nid']['field'] = 'nid';
/* Relationship: Reports: user id on report form */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'report_form';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['relationship'] = 'nid';
/* Field: Reports: description */
$handler->display->display_options['fields']['cover_letter']['id'] = 'cover_letter';
$handler->display->display_options['fields']['cover_letter']['table'] = 'report_form';
$handler->display->display_options['fields']['cover_letter']['field'] = 'cover_letter';
$handler->display->display_options['fields']['cover_letter']['label'] = 'Description';
/* Field: User: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'users';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['relationship'] = 'uid';
$handler->display->display_options['fields']['name']['label'] = 'Reporter Name';
/* Field: File: Name */
$handler->display->display_options['fields']['filename']['id'] = 'filename';
$handler->display->display_options['fields']['filename']['table'] = 'file_managed';
$handler->display->display_options['fields']['filename']['field'] = 'filename';
$handler->display->display_options['fields']['filename']['relationship'] = 'fid';
$handler->display->display_options['fields']['filename']['label'] = 'Images';
$handler->display->display_options['fields']['filename']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['filename']['alter']['text'] = '<img src="sites/default/files/[filename] " height="100px" width="100px"></img>';
$handler->display->display_options['fields']['filename']['link_to_file'] = TRUE;

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'reports_result';


$views[$view->name] = $view;