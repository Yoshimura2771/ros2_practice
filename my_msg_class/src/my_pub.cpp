#include <rclcpp/rclcpp.hpp>
#include <rclcpp/qos.hpp>
#include <chrono>
#include "my_messages/msg/two_ints.hpp"
#include "my_pub.hpp"

MyPub::MyPub(
		const std::string& name_space,
		const rclcpp::NodeOptions& options
): Node("my_pub_test", name_space, options){
	using namespace std::chrono_literals;
	pub_ = this->create_publisher<my_messages::msg::TwoInts>("msg_test", rclcpp::QoS(10));
	timer_ = this->create_wall_timer(
		500ms,
		[this]()->void {
			auto msg = std::make_shared<my_messages::msg::TwoInts>();
			msg->a = 3;
			msg->b = 4;
			RCLCPP_INFO(this->get_logger(), "Pub: %ld, %ld", msg->a, msg->b);
			pub_->publish(*msg);
		}
	);
}
