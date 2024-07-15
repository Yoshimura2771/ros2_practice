#include <rclcpp/rclcpp.hpp>
#include "my_messages/srv/calc_two_floats.hpp"


class MyClnt : public rclcpp::Node{
private:
	rclcpp::Client<my_messages::srv::CalcTwoFloats>::SharedPtr clnt_;
	rclcpp::TimerBase::SharedPtr timer_;
	void callback_timer_();
	void callback_response_(rclcpp::Client<my_messages::srv::CalcTwoFloats>::SharedFuture future);
public:
	MyClnt(
		const std::string& name_space="",
		const rclcpp::NodeOptions& options = rclcpp::NodeOptions()
	);
};

