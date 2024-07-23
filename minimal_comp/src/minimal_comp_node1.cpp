#include "minimal_comp/minimal_comp_node1.hpp"

namespace minimal_comp
{

MinimalCompNode1::MinimalCompNode1(
    const std::string &node_name,
    const rclcpp::NodeOptions& options
): Node("minimal_comp1", node_name, options)
{
    RCLCPP_INFO(this->get_logger(), "minimal comp 1 test");
}

}  // namespace minimal_comp
