<?php
/**
 * @file
 * stanford_content_status.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function stanford_content_status_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}
