#include <rclcpp/rclcpp.hpp>
#include <rclcpp/qos.hpp>
#include "my_messages/msg/two_ints.hpp"
#include "my_sub.hpp"

MySub::MySub(
		const std::string& name_space,
		const rclcpp::NodeOptions& options
):Node("my_sub_test", name_space, options){
	sub_ = this->create_subscription<my_messages::msg::TwoInts>(
		"msg_test",
		rclcpp::QoS(10),
		[this](const my_messages::msg::TwoInts::SharedPtr msg) -> void{
			RCLCPP_INFO(this->get_logger(), "Sub: %d, %d", msg->a, msg->b);
		}
	);
}
