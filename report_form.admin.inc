<?php

/**
 * @file
 * Functions that are only called on the admin pages.
 */

/**
 * Module settings form.
 */
function report_form_settings() {
  $form['report_form_info'] = array(
    '#value' => t('<p>The report form module allows you to display a contact form right under a node</p>'),
  );

  // General settings.
  $form['general'] = array(
    '#type' => 'fieldset',
    '#title' => t('General settings'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );
  $form['general']['report_form_mode'] = array(
    '#type' => 'radios',
    '#title' => t('Report form to use'),
    '#description' => t("Select the form to use - by default."),
    '#default_value' => variable_get('report_form_mode',REPORTING_FORM_MODE_BLOCK_VIEW),
    '#options' => array(
     REPORTING_FORM_MODE_BLOCK_VIEW => t("Show block on node"),
     REPORTING_FORM_MODE_APPLY_LINK => t("Show form on node"),
    ),
  );
 
 
  

  // Types settings.
  $form['types'] = array(
    '#type' => 'fieldset',
    '#title' => t('Content types'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );
  $select = array();
  $types = node_type_get_types();
  foreach ($types as $key => $type) {
    $names[$key] = $type->name;
    $select[$key] = $names[$key];
  }
  $form['types']['report_form_types'] = array(
    '#title' => t('Included content types'),
    '#type' => 'checkboxes',
    '#default_value' => variable_get('report_form_types', array()),
    '#options' => $select,
    '#description' => t('Select the content types for which you want a form and/or link added.'),
    '#prefix' => '<div class="report_form_checkboxes">',
    '#suffix' => '</div>',
  );

  return system_settings_form($form);
}
