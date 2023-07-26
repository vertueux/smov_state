#include <template/template.h>

namespace smov {

void TemplateState::on_start() {
  // This will be called when the node starts running.
  whats_up_world();
}

void TemplateState::on_loop() {
  // This will called every 500ms (But you 
  // can change the timeout in ./robot_main.cc).
}

void TemplateState::on_quit() {
  // This is called when the program gets shutdown.
}

// This is an example function only made to 
// showcase how this is supposed to work.
void TemplateState::whats_up_world() {
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "What's up world ?");
}

}

// This macro creates the node and the main() input, which spins the node.
DECLARE_STATE_NODE_CLASS("smov_template_state", smov::TemplateState, 500ms)