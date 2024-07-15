#include <rclcpp/rclcpp.hpp>
#include "my_clnt.hpp"
#include "my_messages/srv/calc_two_floats.hpp"

using namespace std::chrono_literals;

void MyClnt::callback_timer_(){
	while(!clnt_->wait_for_service(1s)){
		if(!rclcpp::ok()){
			RCLCPP_ERROR(this->get_logger(), "Client interrupted while waiting for service");
			return;
		}
		RCLCPP_INFO(this->get_logger(), "waiting for service...");
	}
	
	auto request = std::make_shared<my_messages::srv::CalcTwoFloats::Request>();
	request->a = 10.0;
	request->b = 11.2;

	auto future_res = clnt_->async_send_request(request,
			std::bind(&MyClnt::callback_response_,this,std::placeholders::_1));
}

void MyClnt::callback_response_(rclcpp::Client<my_messages::srv::CalcTwoFloats>::SharedFuture future){
	RCLCPP_INFO(this->get_logger(), "res: %lf, %lf", future.get()->sum, future.get()->diff);
}

MyClnt::MyClnt(
	const std::string& name_space,
	const rclcpp::NodeOptions& options
): Node("minimal_client", name_space, options){
	clnt_ = this->create_client<my_messages::srv::CalcTwoFloats>("srv_test");
	timer_ = this->create_wall_timer(
		1s,
		std::bind(&MyClnt::callback_timer_, this)
	);
}

