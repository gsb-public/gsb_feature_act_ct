<?php
/**
 * @file
 * gsb_feature_act_ct.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function gsb_feature_act_ct_taxonomy_default_vocabularies() {
  return array(
    'organization_type' => array(
      'name' => 'ACT Organization Type',
      'machine_name' => 'organization_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'project_focus' => array(
      'name' => 'ACT Project Focus',
      'machine_name' => 'project_focus',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'project_type' => array(
      'name' => 'ACT Project Type',
      'machine_name' => 'project_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
