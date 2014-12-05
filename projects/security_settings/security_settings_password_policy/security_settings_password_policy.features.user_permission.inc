<?php
/**
 * @file
 * security_settings.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function security_settings_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer password policies'.
  $permissions['administer password policies'] = array(
    'name' => 'administer password policies',
    'roles' => array(),
    'module' => 'password_policy',
  );

  // Exported permission: 'force password change'.
  $permissions['force password change'] = array(
    'name' => 'force password change',
    'roles' => array(),
    'module' => 'password_policy',
  );

  // Exported permission: 'unblock expired accounts'.
  $permissions['unblock expired accounts'] = array(
    'name' => 'unblock expired accounts',
    'roles' => array(),
    'module' => 'password_policy',
  );

  return $permissions;
}
