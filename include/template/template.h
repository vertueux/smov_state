#pragma once

#include <rclcpp/rclcpp.hpp>
#include <smov/executable.h>

class TemplateState {
 public:
  STATE_CLASS(TemplateState)

  // This is an example function only made to 
  // showcase how this is supposed to work.
  void whats_up_world();
};