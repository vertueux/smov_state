#pragma once

#include <rclcpp/rclcpp.hpp>

#include <states/robot_states.h>
#include <states_msgs/msg/states_servos.hpp>

namespace smov {

class TemplateState {
 public:
  STATE_CLASS("Template")

  // This is an example function only made to 
  // showcase how this is supposed to work.
  void whats_up_world();
};

} // namespace smov
