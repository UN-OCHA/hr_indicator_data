<?php
/**
 * @file
 * hr_indicator_data.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function hr_indicator_data_default_rules_configuration() {
  $items = array();
  $items['rules_target_is_greater_then_need'] = entity_import('rules_config', '{ "rules_target_is_greater_then_need" : {
      "LABEL" : "Target is greater then need",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_presave" ],
      "IF" : [
        { "data_is" : { "data" : [ "node:type" ], "value" : "indicator_data" } },
        { "data_is" : {
            "data" : [ "node:field-ind-target" ],
            "op" : "\\u003E",
            "value" : [ "node:field-ind-need" ]
          }
        }
      ],
      "DO" : [
        { "drupal_message" : {
            "message" : "The specified target value of [node:field_ind_target] is greater then the needs value of [node:field-ind-need].",
            "type" : "warning",
            "repeat" : 0
          }
        }
      ]
    }
  }');
  return $items;
}
