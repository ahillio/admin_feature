<?php
/**
 * @file
 * admin_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function admin_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "linkit" && $api == "linkit_profiles") {
    return array("version" => "1");
  }
}
