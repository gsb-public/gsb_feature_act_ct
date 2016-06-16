<?php
/**
 * @file
 * gsb_feature_act_ct.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gsb_feature_act_ct_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_final_report_outline|node|act|form';
  $field_group->group_name = 'group_final_report_outline';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'act';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_project_details';
  $field_group->data = array(
    'label' => 'Final Report Outline',
    'weight' => '31',
    'children' => array(
      0 => 'field_act_final_report_outline',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_final_report_outline|node|act|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_issue|node|act|form';
  $field_group->group_name = 'group_issue';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'act';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_project_details';
  $field_group->data = array(
    'label' => 'Issue',
    'weight' => '25',
    'children' => array(
      0 => 'field_act_issue',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_issue|node|act|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_key_conclusions|node|act|form';
  $field_group->group_name = 'group_key_conclusions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'act';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_project_details';
  $field_group->data = array(
    'label' => 'Key Conclusions',
    'weight' => '30',
    'children' => array(
      0 => 'field_act_key_conclusions',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_key_conclusions|node|act|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_key_recommendations|node|act|form';
  $field_group->group_name = 'group_key_recommendations';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'act';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_project_details';
  $field_group->data = array(
    'label' => 'Key Recommendations',
    'weight' => '29',
    'children' => array(
      0 => 'field_act_key_recommendations',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_key_recommendations|node|act|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organization_type|node|act|form';
  $field_group->group_name = 'group_organization_type';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'act';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_taxonomy';
  $field_group->data = array(
    'label' => 'Organization Type',
    'weight' => '12',
    'children' => array(
      0 => 'field_act_organization_type',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_organization_type|node|act|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organization|node|act|form';
  $field_group->group_name = 'group_organization';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'act';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_project_details';
  $field_group->data = array(
    'label' => 'Organization',
    'weight' => '24',
    'children' => array(
      0 => 'field_act_organization',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_organization|node|act|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_details|node|act|form';
  $field_group->group_name = 'group_project_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'act';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project Details',
    'weight' => '13',
    'children' => array(
      0 => 'group_final_report_outline',
      1 => 'group_issue',
      2 => 'group_key_conclusions',
      3 => 'group_key_recommendations',
      4 => 'group_organization',
      5 => 'group_project_objectives',
      6 => 'group_project_overview',
      7 => 'group_situation',
      8 => 'group_useful_items',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $field_groups['group_project_details|node|act|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_focus|node|act|form';
  $field_group->group_name = 'group_project_focus';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'act';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_taxonomy';
  $field_group->data = array(
    'label' => 'Project Focus',
    'weight' => '11',
    'children' => array(
      0 => 'field_act_project_focus',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_project_focus|node|act|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_objectives|node|act|form';
  $field_group->group_name = 'group_project_objectives';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'act';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_project_details';
  $field_group->data = array(
    'label' => 'Project Objectives',
    'weight' => '27',
    'children' => array(
      0 => 'field_act_project_objectives',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_project_objectives|node|act|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_overview|node|act|form';
  $field_group->group_name = 'group_project_overview';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'act';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_project_details';
  $field_group->data = array(
    'label' => 'Project Overview',
    'weight' => '28',
    'children' => array(
      0 => 'field_act_project_overview',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_project_overview|node|act|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_related_content|node|act|form';
  $field_group->group_name = 'group_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'act';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related Content',
    'weight' => '16',
    'children' => array(
      0 => 'field_file_unlimited_public',
      1 => 'field_link_related_unlimited',
      2 => 'field_related_idea_story',
      3 => 'field_related_other_unlimited',
      4 => 'field_person_ref_unlimited',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_related_content|node|act|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_situation|node|act|form';
  $field_group->group_name = 'group_situation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'act';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_project_details';
  $field_group->data = array(
    'label' => 'Situation',
    'weight' => '26',
    'children' => array(
      0 => 'field_act_situation',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_situation|node|act|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_taxonomy|node|act|form';
  $field_group->group_name = 'group_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'act';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taxonomy',
    'weight' => '10',
    'children' => array(
      0 => 'group_organization_type',
      1 => 'group_project_focus',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $field_groups['group_taxonomy|node|act|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_useful_items|node|act|form';
  $field_group->group_name = 'group_useful_items';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'act';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_project_details';
  $field_group->data = array(
    'label' => 'Useful Items',
    'weight' => '32',
    'children' => array(
      0 => 'field_act_useful_item',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_useful_items|node|act|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_act_info|node|act|default';
  $field_group->group_name = 'group_wrapper_act_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'act';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'ACT Info',
    'weight' => '4',
    'children' => array(
      0 => 'field_act_organization_type',
      1 => 'field_act_project_focus',
      2 => 'field_act_project_type',
      3 => 'field_act_round',
      4 => 'field_location',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'ACT Info',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-wrapper-act-info',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_act_info|node|act|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_related|node|act|default';
  $field_group->group_name = 'group_wrapper_related';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'act';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related',
    'weight' => '18',
    'children' => array(
      0 => 'field_file_unlimited_public',
      1 => 'field_link_related_unlimited',
      2 => 'field_related_idea_story',
      3 => 'field_related_other_unlimited',
      4 => 'field_person_ref_unlimited',
      5 => 'related_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Related',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_wrapper_related|node|act|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('ACT Info');
  t('Final Report Outline');
  t('Issue');
  t('Key Conclusions');
  t('Key Recommendations');
  t('Organization');
  t('Organization Type');
  t('Project Details');
  t('Project Focus');
  t('Project Objectives');
  t('Project Overview');
  t('Related');
  t('Related Content');
  t('Situation');
  t('Taxonomy');
  t('Useful Items');

  return $field_groups;
}
