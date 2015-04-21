<?php
/**
 * @file
 * stanford_content_status.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function stanford_content_status_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_s_content_status'
  $field_bases['field_s_content_status'] = array(
    'active' => 1,
    'cardinality' => 2,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_s_content_status',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        3 => 'Not Started',
        0 => 'Draft Content',
        5 => 'Needs Images',
        1 => 'Ready for Review',
        2 => 'Approved',
        4 => 'Final Sign-off',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
