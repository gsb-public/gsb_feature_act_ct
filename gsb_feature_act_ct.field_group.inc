<?php
/**
 * @file
 * gsb_feature_act_ct.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gsb_feature_act_ct_field_group_info() {
  $export = array();

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
    'weight' => '22',
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
  $export['group_final_report_outline|node|act|form'] = $field_group;

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
    'weight' => '16',
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
  $export['group_issue|node|act|form'] = $field_group;

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
    'weight' => '21',
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
  $export['group_key_conclusions|node|act|form'] = $field_group;

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
    'weight' => '20',
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
  $export['group_key_recommendations|node|act|form'] = $field_group;

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
  $export['group_organization_type|node|act|form'] = $field_group;

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
    'weight' => '15',
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
  $export['group_organization|node|act|form'] = $field_group;

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
    'weight' => '12',
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
  $export['group_project_details|node|act|form'] = $field_group;

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
  $export['group_project_focus|node|act|form'] = $field_group;

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
    'weight' => '18',
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
  $export['group_project_objectives|node|act|form'] = $field_group;

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
    'weight' => '19',
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
  $export['group_project_overview|node|act|form'] = $field_group;

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
    'weight' => '15',
    'children' => array(
      0 => 'field_alumni_ref',
      1 => 'field_file_unlimited_public',
      2 => 'field_person_fac_ref',
      3 => 'field_related_idea_story',
      4 => 'field_related_other_unlimited',
      5 => 'field_link_related_unlimited',
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
  $export['group_related_content|node|act|form'] = $field_group;

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
    'weight' => '17',
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
  $export['group_situation|node|act|form'] = $field_group;

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
    'weight' => '9',
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
  $export['group_taxonomy|node|act|form'] = $field_group;

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
    'weight' => '23',
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
  $export['group_useful_items|node|act|form'] = $field_group;

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
      0 => 'field_location',
      1 => 'field_act_organization_type',
      2 => 'field_act_project_focus',
      3 => 'field_act_project_type',
      4 => 'field_act_round',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'ACT Info',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_act_info|node|act|default'] = $field_group;

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
    'weight' => '17',
    'children' => array(
      0 => 'field_alumni_ref',
      1 => 'field_file_unlimited_public',
      2 => 'field_person_fac_ref',
      3 => 'field_related_idea_story',
      4 => 'field_related_other_unlimited',
      5 => 'field_link_related_unlimited',
      6 => 'related_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_wrapper_related|node|act|default'] = $field_group;

  return $export;
}
