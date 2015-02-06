<?php
/**
 * @file
 * gsb_feature_act_ct.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function gsb_feature_act_ct_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: act
  $profiles['act'] = array(
    'format' => 'act',
    'editor' => 'ckeditor',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'theme' => '',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'Undo' => 1,
          'Redo' => 1,
          'PasteText' => 1,
          'PasteFromWord' => 1,
        ),
      ),
      'toolbarLocation' => 'top',
      'resize_enabled' => 1,
      'default_toolbar_grouping' => 0,
      'simple_source_formatting' => 0,
      'css_setting' => 'theme',
      'css_path' => '',
      'stylesSet' => '',
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'advanced__active_tab' => 'edit-basic',
      'forcePasteAsPlainText' => 0,
    ),
  );

  return $profiles;
}
