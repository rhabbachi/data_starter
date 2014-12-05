<?php
/**
 * @file
 * security_settings_seckit.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function security_settings_seckit_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
