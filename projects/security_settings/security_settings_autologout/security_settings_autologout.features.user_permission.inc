<?php
/**
 * @file
 * security_settings_autologout.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function security_settings_autologout_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer autologout'.
  $permissions['administer autologout'] = array(
    'name' => 'administer autologout',
    'roles' => array(),
    'module' => 'autologout',
  );

  // Exported permission: 'change own logout threshold'.
  $permissions['change own logout threshold'] = array(
    'name' => 'change own logout threshold',
    'roles' => array(),
    'module' => 'autologout',
  );

  return $permissions;
}
