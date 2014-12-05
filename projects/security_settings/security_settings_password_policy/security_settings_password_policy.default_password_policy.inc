<?php
/**
 * @file
 * security_settings_password_policy.default_password_policy.inc
 */

/**
 * Implements hook_default_password_policy().
 */
function security_settings_password_policy_default_password_policy() {
  $export = array();

  print_r('here');
  $password_policy = new stdClass();
  $password_policy->disabled = FALSE; /* Edit this to true to make a default password_policy disabled initially */
  $password_policy->api_version = 1;
  $password_policy->name = 'sitewide policy';
  $password_policy->description = 'Sitewide policy';
  $password_policy->enabled = TRUE;
  $password_policy->policy = array(
    'username' => '1',
    'digit' => '1',
    'lowercase' => '1',
    'alphanumeric' => '1',
    'letter' => '1',
    'complexity' => '4',
    'uppercase' => '1',
    'length' => '12',
    'history' => '24',
    'punctuation' => '1',
  );
  $password_policy->created = 1406586034;
  $password_policy->expiration = 60;
  $password_policy->warning = '2';
  $password_policy->weight = FALSE;
  $export['sitewide policy'] = $password_policy;

  return $export;
}
