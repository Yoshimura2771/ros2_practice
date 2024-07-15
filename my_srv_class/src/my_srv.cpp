#include <rclcpp/rclcpp.hpp>
#include "my_srv.hpp"
#include "my_messages/srv/calc_two_floats.hpp"


void MySrv::handleService_(
	const std::shared_ptr<my_messages::srv::CalcTwoFloats::Request> request,
	const std::shared_ptr<my_messages::srv::CalcTwoFloats::Response> response
){
	RCLCPP_INFO(this->get_logger(), "srv.request:%lf, %lf", request->a, request->b);
	response->sum = request->a + request->b;
	response->diff = request->a - request->b;
}

MySrv::MySrv(
	const std::string& name_space,
	const rclcpp::NodeOptions& options
): Node("minimal_service", name_space, options){
	using namespace std::placeholders;

	srv_ = this->create_service<my_messages::srv::CalcTwoFloats>(
		"srv_test",
		std::bind(&MySrv::handleService_, this, _1, _2)
	);
}
