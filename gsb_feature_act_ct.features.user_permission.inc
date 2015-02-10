<?php
/**
 * @file
 * gsb_feature_act_ct.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gsb_feature_act_ct_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'use text format act'.
  $permissions['use text format act'] = array(
    'name' => 'use text format act',
    'roles' => array(),
    'module' => 'filter',
  );

  return $permissions;
}
