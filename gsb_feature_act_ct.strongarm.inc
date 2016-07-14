<?php
/**
 * @file
 * gsb_feature_act_ct.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gsb_feature_act_ct_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__act';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'alumni_reunion_agenda_list' => array(
        'custom_settings' => FALSE,
      ),
      'views_content_pane' => array(
        'custom_settings' => FALSE,
      ),
      'event_listing' => array(
        'custom_settings' => FALSE,
      ),
      'event_upcoming' => array(
        'custom_settings' => FALSE,
      ),
      'featured' => array(
        'custom_settings' => FALSE,
      ),
      'alumni_featured_content' => array(
        'custom_settings' => FALSE,
      ),
      'idea_story_latest_stories' => array(
        'custom_settings' => FALSE,
      ),
      'idea_story_related' => array(
        'custom_settings' => FALSE,
      ),
      'idea_story_top_stories' => array(
        'custom_settings' => FALSE,
      ),
      'insight_featured_card' => array(
        'custom_settings' => FALSE,
      ),
      'megamenu' => array(
        'custom_settings' => FALSE,
      ),
      'news_listing' => array(
        'custom_settings' => FALSE,
      ),
      'people_fpp' => array(
        'custom_settings' => FALSE,
      ),
      'phd_job_market_candidate' => array(
        'custom_settings' => FALSE,
      ),
      'media_contact' => array(
        'custom_settings' => FALSE,
      ),
      'teaser_listing' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'alumni_name' => array(
        'custom_settings' => FALSE,
      ),
      'act_project_listing' => array(
        'custom_settings' => TRUE,
      ),
      'act_project_by_criteria' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'compact' => array(
        'custom_settings' => FALSE,
      ),
      'expanded' => array(
        'custom_settings' => FALSE,
      ),
      'event_contacts' => array(
        'custom_settings' => FALSE,
      ),
      'field_program_ctas' => array(
        'custom_settings' => FALSE,
      ),
      'field_program_curriculum' => array(
        'custom_settings' => FALSE,
      ),
      'field_program_curriculum_one' => array(
        'custom_settings' => FALSE,
      ),
      'field_program_curriculum_two' => array(
        'custom_settings' => FALSE,
      ),
      'field_program_director' => array(
        'custom_settings' => FALSE,
      ),
      'field_program_participants_desc' => array(
        'custom_settings' => FALSE,
      ),
      'field_program_participants_intro' => array(
        'custom_settings' => FALSE,
      ),
      'field_program_related' => array(
        'custom_settings' => FALSE,
      ),
      'featured_program' => array(
        'custom_settings' => FALSE,
      ),
      'program_director' => array(
        'custom_settings' => FALSE,
      ),
      'faculty_leadership' => array(
        'custom_settings' => FALSE,
      ),
      'faculty_one' => array(
        'custom_settings' => FALSE,
      ),
      'faculty_teaching_programs' => array(
        'custom_settings' => FALSE,
      ),
      'faculty_two' => array(
        'custom_settings' => FALSE,
      ),
      'field_program_faculty' => array(
        'custom_settings' => FALSE,
      ),
      'guest_speakers_advisors' => array(
        'custom_settings' => FALSE,
      ),
      'main_list' => array(
        'custom_settings' => FALSE,
      ),
      'program_contact' => array(
        'custom_settings' => FALSE,
      ),
      'program_explore_other' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '21',
        ),
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '19',
        ),
        'redirect' => array(
          'weight' => '18',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__act'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_act';
  $strongarm->value = array();
  $export['menu_options_act'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_act';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_act'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_act';
  $strongarm->value = array(
    0 => 'force_pathauto',
    1 => 'moderation',
    2 => 'revision',
  );
  $export['node_options_act'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_act';
  $strongarm->value = '0';
  $export['node_preview_act'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_act';
  $strongarm->value = 0;
  $export['node_submitted_act'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_act_pattern';
  $strongarm->value = 'alumni/volunteering/act/projects/[node:field_pathauto_title_alias]';
  $export['pathauto_node_act_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_access_node_type_act';
  $strongarm->value = 0;
  $export['workbench_access_node_type_act'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'workbench_moderation_default_state_act';
  $strongarm->value = 'draft';
  $export['workbench_moderation_default_state_act'] = $strongarm;

  return $export;
}
