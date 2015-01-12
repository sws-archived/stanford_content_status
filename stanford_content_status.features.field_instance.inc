<?php
/**
 * @file
 * stanford_content_status.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function stanford_content_status_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-page-field_s_content_status'
  $field_instances['node-page-field_s_content_status'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_s_content_status',
    'label' => 'Content Status',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 32,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Content Status');

  return $field_instances;
}
