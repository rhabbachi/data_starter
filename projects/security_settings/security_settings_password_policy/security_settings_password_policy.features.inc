<?php
/**
 * @file
 * security_settings_password_policy.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function security_settings_password_policy_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "password_policy" && $api == "default_password_policy") {
    return array("version" => "1");
  }
  if ($module == "password_policy" && $api == "default_password_policy_role") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
