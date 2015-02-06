<?php
/**
 * @file
 * gsb_feature_act_ct.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function gsb_feature_act_ct_filter_default_formats() {
  $formats = array();

  // Exported format: ACT.
  $formats['act'] = array(
    'format' => 'act',
    'name' => 'ACT',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_html' => array(
        'weight' => -10,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <ul> <ol> <li> <dl> <dt> <dd> <p> <h3>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
    ),
  );

  return $formats;
}
