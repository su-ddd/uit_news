<?php
/**
 * @file
 * uit_news.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function uit_news_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_featured_image|node|news|form';
  $field_group->group_name = 'group_featured_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Featured Image',
    'weight' => '5',
    'children' => array(
      0 => 'field_featured_image',
      1 => 'field_hide_image',
      2 => 'field_featured_image_caption',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-featured-image field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_featured_image|node|news|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Featured Image');

  return $field_groups;
}
