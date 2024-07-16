#include <rclcpp/rclcpp.hpp>


class MinimalParameterHolder : public rclcpp::Node
{
public:
    MinimalParameterHolder(
        const std::string& name_space="",
        const rclcpp::NodeOptions& options=rclcpp::NodeOptions()
    );
};
