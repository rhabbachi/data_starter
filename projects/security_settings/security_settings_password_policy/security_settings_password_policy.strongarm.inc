<?php
/**
 * @file
 * security_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function security_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'password_policy_admin';
  $strongarm->value = 0;
  $export['password_policy_admin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'password_policy_begin';
  $strongarm->value = '0';
  $export['password_policy_begin'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'password_policy_block';
  $strongarm->value = '0';
  $export['password_policy_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'password_policy_force_change_reset';
  $strongarm->value = 0;
  $export['password_policy_force_change_reset'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'password_policy_show_restrictions';
  $strongarm->value = 0;
  $export['password_policy_show_restrictions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'password_policy_warning_body';
  $strongarm->value = '!username,

Your password at !site will expire in less than !days_left day(s).

Please go to !edit_uri to change your password.';
  $export['password_policy_warning_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'password_policy_warning_subject';
  $strongarm->value = 'Password expiration warning for !username at !site';
  $export['password_policy_warning_subject'] = $strongarm;
  
  return $export;
}
