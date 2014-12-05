<?php
/**
 * @file
 * security_settings_password_autologout.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function security_settings_password_policy_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
