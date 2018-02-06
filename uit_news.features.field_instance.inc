<?php
/**
 * @file
 * uit_news.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function uit_news_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-news-body'.
  $field_instances['node-news-body'] = array(
    'bundle' => 'news',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-news-field_blurb'.
  $field_instances['node-news-field_blurb'] = array(
    'bundle' => 'news',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_blurb',
    'label' => 'Blurb',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'full_html' => 'full_html',
          'phishing_email' => 'phishing_email',
          'php_use_with_caution_' => 'php_use_with_caution_',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'full_html' => array(
              'weight' => 0,
            ),
            'phishing_email' => array(
              'weight' => 0,
            ),
            'php_use_with_caution_' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-news-field_date'.
  $field_instances['node-news-field_date'] = array(
    'bundle' => 'news',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_date',
    'label' => 'Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-6:+3',
      ),
      'type' => 'date_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-news-field_featured_image'.
  $field_instances['node-news-field_featured_image'] = array(
    'bundle' => 'news',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_featured_image',
    'label' => 'Featured Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '5 MB',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'simplecrop',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'plupload' => 0,
            'reference' => 0,
            'remote' => 0,
            'upload' => 'upload',
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 0,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
            'search_all_fields' => 0,
          ),
        ),
        'preview_image_style' => FALSE,
        'progress_indicator' => 'throbber',
        'simplecrop' => array(
          'crop' => array(
            'initial_area' => 'maximize',
            'max_area' => array(
              'height' => '',
              'width' => '',
            ),
            'min_area' => array(
              'height' => '',
              'width' => '',
            ),
            'ratio' => array(
              'height' => 1,
              'width' => 1,
            ),
          ),
          'cropped' => array(
            'scale' => array(
              'height' => 450,
              'width' => 450,
            ),
          ),
          'hide_filename' => 1,
          'initial_display' => 'original_image',
          'source' => array(
            'scale' => array(
              'height' => 1000,
              'width' => 1000,
            ),
          ),
          'upload_display' => 'original_image',
        ),
      ),
      'type' => 'simplecrop_widget',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-news-field_featured_image_caption'.
  $field_instances['node-news-field_featured_image_caption'] = array(
    'bundle' => 'news',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_featured_image_caption',
    'label' => 'Featured Image Caption',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'full_html' => 'full_html',
          'phishing_email' => 'phishing_email',
          'php_use_with_caution_' => 'php_use_with_caution_',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'full_html' => array(
              'weight' => 0,
            ),
            'phishing_email' => array(
              'weight' => 0,
            ),
            'php_use_with_caution_' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 144,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-news-field_hide_image'.
  $field_instances['node-news-field_hide_image'] = array(
    'bundle' => 'news',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_hide_image',
    'label' => 'Hide featured image in content view',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-news-field_images'.
  $field_instances['node-news-field_images'] = array(
    'bundle' => 'news',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_images',
    'label' => 'Images',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'plupload' => 0,
            'reference' => 0,
            'remote' => 0,
            'upload' => 'upload',
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 0,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
            'search_all_fields' => 0,
          ),
        ),
        'insert' => 1,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 'auto',
          'icon_link' => 0,
          'image' => 0,
          'image_home_page_banner' => 0,
          'image_large' => 0,
          'image_medium' => 0,
          'image_news_card' => 0,
          'image_news_feature' => 0,
          'image_newsletter' => 'image_newsletter',
          'image_newsletter_landscape' => 'image_newsletter_landscape',
          'image_newsletter_photo' => 'image_newsletter_photo',
          'image_newsletter_portrait' => 'image_newsletter_portrait',
          'image_newsletter_square' => 'image_newsletter_square',
          'image_phone' => 0,
          'image_screenshot' => 'image_screenshot',
          'image_simplecrop' => 0,
          'image_thumbnail' => 0,
          'image_thumbnail_preview' => 0,
          'image_topic' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-news-field_news_category'.
  $field_instances['node-news-field_news_category'] = array(
    'bundle' => 'news',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '<ul>
<li>Service Spotlights: Stories that feature UIT services.</li>
<li>Partnered Projects: Stories that feature UIT’s successful collaboration with partners across campus, and highlight ways UIT brings value to the university.</li>
<li>Tips & Tricks: Stories that offer a tip or trick about available UIT services, tools and resources that a user may not have known.</li>
<li>Information Security: Stories that are specific to information security at Stanford.</li>
<li>Initiatives & Projects: Stories that detail specific UIT priorities, initiatives and projects that are underway or planned.</li>
<li>Service Alerts: Announcements about service delays, outages or other types of service alerts, whether they are planned or unplanned.</li>
<li>Special Report: This is a catch-all for stories that fall outside these other categories, such as Bill Clebsch’s retirement article.</li>
<li>Event Spotlights: Stories that feature a UIT or IT-related event, whether upcoming or in the past.</li>
</ul>
',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_news_category',
    'label' => 'Category',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-news-field_preview_mode'.
  $field_instances['node-news-field_preview_mode'] = array(
    'bundle' => 'news',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'If checked, this news item will not appear on the homepage, on news pages, feeds or Slack.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_preview_mode',
    'label' => 'Preview Mode',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-news-field_subtitle'.
  $field_instances['node-news-field_subtitle'] = array(
    'bundle' => 'news',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_subtitle',
    'label' => 'Subtitle',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'full_html' => 'full_html',
          'phishing_email' => 'phishing_email',
          'php_use_with_caution_' => 'php_use_with_caution_',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'full_html' => array(
              'weight' => 0,
            ),
            'phishing_email' => array(
              'weight' => 0,
            ),
            'php_use_with_caution_' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-news-field_video'.
  $field_instances['node-news-field_video'] = array(
    'bundle' => 'news',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Youtube ID',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_video',
    'label' => 'Video',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'full_html' => 'full_html',
          'phishing_email' => 'phishing_email',
          'php_use_with_caution_' => 'php_use_with_caution_',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'full_html' => array(
              'weight' => 0,
            ),
            'phishing_email' => array(
              'weight' => 0,
            ),
            'php_use_with_caution_' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<ul>
<li>Service Spotlights: Stories that feature UIT services.</li>
<li>Partnered Projects: Stories that feature UIT’s successful collaboration with partners across campus, and highlight ways UIT brings value to the university.</li>
<li>Tips & Tricks: Stories that offer a tip or trick about available UIT services, tools and resources that a user may not have known.</li>
<li>Information Security: Stories that are specific to information security at Stanford.</li>
<li>Initiatives & Projects: Stories that detail specific UIT priorities, initiatives and projects that are underway or planned.</li>
<li>Service Alerts: Announcements about service delays, outages or other types of service alerts, whether they are planned or unplanned.</li>
<li>Special Report: This is a catch-all for stories that fall outside these other categories, such as Bill Clebsch’s retirement article.</li>
<li>Event Spotlights: Stories that feature a UIT or IT-related event, whether upcoming or in the past.</li>
</ul>
');
  t('Blurb');
  t('Body');
  t('Category');
  t('Date');
  t('Featured Image');
  t('Featured Image Caption');
  t('Hide featured image in content view');
  t('If checked, this news item will not appear on the homepage, on news pages, feeds or Slack.');
  t('Images');
  t('Preview Mode');
  t('Subtitle');
  t('Video');
  t('Youtube ID');

  return $field_instances;
}
