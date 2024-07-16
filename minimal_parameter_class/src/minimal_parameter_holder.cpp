#include <rclcpp/rclcpp.hpp>
#include "minimal_parameter_holder.hpp"


MinimalParameterHolder::MinimalParameterHolder(
    const std::string& name_space,
    const rclcpp::NodeOptions& options
): Node("param_holder", name_space, options){
    using namespace std::chrono_literals;

    auto param1 = declare_parameter("foo", 0);
    auto param2 = declare_parameter("bar", "ok");
    auto results = set_parameters({
        rclcpp::Parameter("foo", 2),
        rclcpp::Parameter("bar", "hello")
    });
}