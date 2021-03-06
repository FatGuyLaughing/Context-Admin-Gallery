<?php

/**
 * Implementation of hook_strongarm().
 */
function ca_gallery_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_ca_gallery';
  $strongarm->value = 0;

  $export['comment_anonymous_ca_gallery'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_ca_gallery_image';
  $strongarm->value = 0;

  $export['comment_anonymous_ca_gallery_image'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_ca_gallery';
  $strongarm->value = '0';

  $export['comment_ca_gallery'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_ca_gallery_image';
  $strongarm->value = '0';

  $export['comment_ca_gallery_image'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_ca_gallery';
  $strongarm->value = '3';

  $export['comment_controls_ca_gallery'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_ca_gallery_image';
  $strongarm->value = '3';

  $export['comment_controls_ca_gallery_image'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_ca_gallery';
  $strongarm->value = '4';

  $export['comment_default_mode_ca_gallery'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_ca_gallery_image';
  $strongarm->value = '4';

  $export['comment_default_mode_ca_gallery_image'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_ca_gallery';
  $strongarm->value = '1';

  $export['comment_default_order_ca_gallery'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_ca_gallery_image';
  $strongarm->value = '1';

  $export['comment_default_order_ca_gallery_image'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_ca_gallery';
  $strongarm->value = '50';

  $export['comment_default_per_page_ca_gallery'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_ca_gallery_image';
  $strongarm->value = '50';

  $export['comment_default_per_page_ca_gallery_image'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_ca_gallery';
  $strongarm->value = '0';

  $export['comment_form_location_ca_gallery'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_ca_gallery_image';
  $strongarm->value = '0';

  $export['comment_form_location_ca_gallery_image'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_ca_gallery';
  $strongarm->value = '1';

  $export['comment_preview_ca_gallery'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_ca_gallery_image';
  $strongarm->value = '1';

  $export['comment_preview_ca_gallery_image'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_ca_gallery';
  $strongarm->value = '1';

  $export['comment_subject_field_ca_gallery'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_ca_gallery_image';
  $strongarm->value = '1';

  $export['comment_subject_field_ca_gallery_image'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_ca_gallery';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-2',
    'revision_information' => '-1',
    'author' => '0',
    'options' => '1',
    'menu' => '-3',
    'path' => '2',
  );

  $export['content_extra_weights_ca_gallery'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_ca_gallery_image';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-3',
    'revision_information' => '-1',
    'author' => '0',
    'options' => '1',
    'menu' => '-2',
    'path' => '3',
  );

  $export['content_extra_weights_ca_gallery_image'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'form_build_id_ca_gallery';
  $strongarm->value = 'form-cdf920ac91a78b5d5a9b0dd1e9c258ba';

  $export['form_build_id_ca_gallery'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ca_gallery';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_ca_gallery'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ca_gallery_image';
  $strongarm->value = array(
    0 => 'status',
  );

  $export['node_options_ca_gallery_image'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ca_gallery_image_pattern';
  $strongarm->value = '[ca-gallery-parent-node-reference-path]/[title-raw]';

  $export['pathauto_node_ca_gallery_image_pattern'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ca_gallery_pattern';
  $strongarm->value = '[ca-gallery-parent-node-reference-path]/[title-raw]';

  $export['pathauto_node_ca_gallery_pattern'] = $strongarm;
  return $export;
}
