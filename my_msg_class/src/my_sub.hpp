#include <rclcpp/rclcpp.hpp>
#include "my_messages/msg/two_ints.hpp"

class MySub : public rclcpp::Node{
private:
	rclcpp::Subscription<my_messages::msg::TwoInts>::SharedPtr sub_;
public:
	MySub(
		const std::string& name_space = "",
		const rclcpp::NodeOptions& options = rclcpp::NodeOptions()
	);
};
