<?php
/**
 * @file
 * security_settings_password_policy.default_password_policy_role.inc
 */

/**
 * Implements hook_default_password_policy_role().
 */
function security_settings_password_policy_default_password_policy_role() {
  $export = array();

  $password_policy_role = new stdClass();
  $password_policy_role->disabled = FALSE; /* Edit this to true to make a default password_policy_role disabled initially */
  $password_policy_role->api_version = 1;
  $password_policy_role->rid = 2;
  $export['2'] = $password_policy_role;

  $password_policy_role = new stdClass();
  $password_policy_role->disabled = FALSE; /* Edit this to true to make a default password_policy_role disabled initially */
  $password_policy_role->api_version = 1;
  $password_policy_role->rid = 161863194;
  $export['161863194'] = $password_policy_role;

  $password_policy_role = new stdClass();
  $password_policy_role->disabled = FALSE; /* Edit this to true to make a default password_policy_role disabled initially */
  $password_policy_role->api_version = 1;
  $password_policy_role->rid = 254633039;
  $export['254633039'] = $password_policy_role;

  $password_policy_role = new stdClass();
  $password_policy_role->disabled = FALSE; /* Edit this to true to make a default password_policy_role disabled initially */
  $password_policy_role->api_version = 1;
  $password_policy_role->rid = 226931607;
  $export['226931607'] = $password_policy_role;

  $password_policy_role = new stdClass();
  $password_policy_role->disabled = FALSE; /* Edit this to true to make a default password_policy_role disabled initially */
  $password_policy_role->api_version = 1;
  $password_policy_role->rid = 27274083;
  $export['27274083'] = $password_policy_role;

  $password_policy_role = new stdClass();
  $password_policy_role->disabled = FALSE; /* Edit this to true to make a default password_policy_role disabled initially */
  $password_policy_role->api_version = 1;
  $password_policy_role->rid = 132006037;
  $export['132006037'] = $password_policy_role;

  $password_policy_role = new stdClass();
  $password_policy_role->disabled = FALSE; /* Edit this to true to make a default password_policy_role disabled initially */
  $password_policy_role->api_version = 1;
  $password_policy_role->rid = 27481291;
  $export['27481291'] = $password_policy_role;
 
  return $export;
}
