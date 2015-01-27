<?php
/**
 * @file
 * gsb_feature_act_ct.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gsb_feature_act_ct_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function gsb_feature_act_ct_node_info() {
  $items = array(
    'act' => array(
      'name' => t('ACT Project'),
      'base' => 'node_content',
      'description' => t('Add an ACT Project.'),
      'has_title' => '1',
      'title_label' => t('Organization Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
