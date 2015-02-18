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
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Undo' => 1,
          'Redo' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'Anchor' => 1,
          'PasteText' => 1,
          'PasteFromWord' => 1,
          'Styles' => 1,
        ),
      ),
      'toolbarLocation' => 'top',
      'resize_enabled' => 1,
      'default_toolbar_grouping' => 0,
      'simple_source_formatting' => 1,
      'css_setting' => 'theme',
      'css_path' => '',
      'stylesSet' => 'Paragraph=p.paragraph
Heading H3=h3',
      'block_formats' => 'p,h3',
      'advanced__active_tab' => 'edit-basic',
      'forcePasteAsPlainText' => 0,
    ),
  );

  return $profiles;
}
