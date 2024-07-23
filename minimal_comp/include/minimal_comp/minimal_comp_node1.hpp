#ifndef MINIMAL_COMP__MINIMAL_COMP_NODE1_HPP_
#define MINIMAL_COMP__MINIMAL_COMP_NODE1_HPP_

#include "minimal_comp/visibility_control.h"

namespace minimal_comp
{

class MinimalCompNode1 : public rclcpp::Node
{
public:
  MINIMAL_COMP_PUBLIC
  MinimalCompNode1(
    const std::string &node_name="",
    const rclcpp::NodeOptions& options=rclcpp::NodeOptions()
  );
};

}  // namespace minimal_comp

#endif  // MINIMAL_COMP__MINIMAL_COMP_NODE1_HPP_
