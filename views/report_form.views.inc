<?php

function report_form_views_data() {
	$data['report_form']['table']['group'] = t('Reports');
  	$data['report_form']['table']['base'] = array(
    	'field' => 'id', // This is the identifier field for the view. 
    	'title' => t('Report Form'), 
    	'help' => t('Example table contains example content and can be related to nodes.'), 
    	'weight' => -10,
  	);
	// Node ID table field.
  	$data['report_form']['nid'] = array(
    	'title' => t('Node ID'), 
    	'help' => t('Some example content that references a node.'),
    	'relationship' => array(
    		'base' => 'node', // The name of the table to join with. 
      		'base field' => 'nid', // The name of the field on the joined table.
      		// 'field' => 'nid' -- see hook_views_data_alter(); not needed here. 
      		'handler' => 'views_handler_relationship', 
      		'label' => t('Node ID of report form'), 
      		'title' => t('Node ID of report form'), 
      		'help' => t('More information on this relationship'),
    		),
  	);
   $data['report_form']['table']['join'] = array(
    	'node' => array(
      		'left_field' => 'nid', 
      		'field' => 'nid',
    		),
  	);
	// Example plain text field.
  	$data['report_form']['user_name'] = array(
    	'title' => t('User name'), 
    	'help' => t('Just a plain text field.'), 
    	'field' => array(
      		'handler' => 'views_handler_field', 
      		'click sortable' => TRUE, // This is use by the table display plugin.
    	), 
    	'sort' => array(
      		'handler' => 'views_handler_sort',
    	), 
    	'filter' => array(
      		'handler' => 'views_handler_filter_string',
    	), 
    	'argument' => array(
      		'handler' => 'views_handler_argument_string',
    	),
  	);
	$data['report_form']['title'] = array(
    	'title' => t('Node Title'), 
    	'help' => t('Just a plain text field.'), 
    	'field' => array(
      		'handler' => 'views_handler_field', 
      		'click sortable' => TRUE, // This is use by the table display plugin.
    	), 
    	'sort' => array(
      		'handler' => 'views_handler_sort',
    	), 
    	'filter' => array(
      		'handler' => 'views_handler_filter_string',
    	), 
    	'argument' => array(
      		'handler' => 'views_handler_argument_string',
    	),
  	);
	$data['report_form']['cover_letter'] = array(
    	'title' => t('Description'), 
    	'help' => t('Just a plain text field.'), 
    	'field' => array(
      		'handler' => 'views_handler_field', 
      		'click sortable' => TRUE, // This is use by the table display plugin.
    	), 
    	'sort' => array(
      		'handler' => 'views_handler_sort',
    	), 
    	'filter' => array(
      		'handler' => 'views_handler_filter_string',
    	), 
    	'argument' => array(
      		'handler' => 'views_handler_argument_string',
    	),
  	);
	$data['report_form']['uid'] = array(
    	'title' => t('User id'), 
    	'help' => t('Just a numeric field.'), 
		'relationship' => array(
      		'base' => 'users', // The name of the table to join with. 
      		'base field' => 'uid', // The name of the field on the joined table.
      		// 'field' => 'nid' -- see hook_views_data_alter(); not needed here. 
      		'handler' => 'views_handler_relationship', 
      		'label' => t('User ID on report form'), 
      		'title' => t('User ID on report form'), 
      		'help' => t('More information on this relationship'),
    	),
    	'field' => array(
      		'handler' => 'views_handler_field_numeric', 
      		'click sortable' => TRUE,
    	), 
    	'filter' => array(
      		'handler' => 'views_handler_filter_numeric',
    	), 
    	'sort' => array(
      		'handler' => 'views_handler_sort',
    	),
  	);
	$data['report_form']['table']['join'] = array(
    	'users' => array(
      		'left_field' => 'uid', 
      		'field' => 'uid',
    		),
  		);
	$data['report_form']['fid'] = array(
    	'title' => t('Upload file ID'), 
    	'help' => t('Just a numeric field.'), 
		'relationship' => array(
      		'base' => 'file_managed', // The name of the table to join with. 
      		'base field' => 'fid', // The name of the field on the joined table.
      		// 'field' => 'nid' -- see hook_views_data_alter(); not needed here. 
      		'handler' => 'views_handler_relationship', 
      		'label' => t('Upload file ID  on report form'), 
      		'title' => t('Upload file ID on report form'), 
      		'help' => t('More information on this relationship'),
    	),
    	'field' => array(
      		'handler' => 'views_handler_field_numeric', 
      		'click sortable' => TRUE,
    	), 
    	'filter' => array(
      		'handler' => 'views_handler_filter_numeric',
    	), 
    	'sort' => array(
      		'handler' => 'views_handler_sort',
    	),
 	);
	$data['report_form']['table']['join'] = array(
    	'file_managed' => array(
      		'left_field' => 'fid', 
      		'field' => 'fid',
    	),
  	);
  
	return $data;
}
