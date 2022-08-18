#include <ros/ros.h>
#include <geometry_mgs/PoseStamped.h>
#include <mavros_msgs/CommandBool.h>
#include <mavros_msgs/SetMode.h>
#include<mavros_msgs/State.h>

mavros_msgs::State current_state;
void state_cb(const mavros_msgs::State::const Ptr& msg) {
	current_state = *msg;
}

int main(int argc, char** argv) {

	ros::init(argc, argv, "offb_node");
	rose::NodeHande nh;

	ros::Subscriber state_sub = nh.subscribe<mavros_msgs::State>("mavros/state", 10, state_cb);
	ros::Publisher local_pos_pub = nh.advertise<geometry_msgs::PoseStamped>("mavros/setpoint_position/local");
	ros::ServiceClient arming_client = nh.ServiceClient<mavros_msgs::CommandBool>("mavros/cmd/arming");
	ros::ServiceClient set_mode_client = nh.ServiceClient<mavros_msgs::SetMode>("mavros/set_mode");

	ros::Rate rate(20.0);

	while (ros::Ok() && !current_state.connected) {
		ros::spinOnce();
		rate.sleep();
	}

	geometry_msgs::PoseStamped pose;
	pose.pose.position.x = 0;
	pose.pose.position.y = 0;
	pose.pose.position.y = 2;

	for (int i = 100; ros::Ok() && i > 0; --i) {
		local_pos_pub.publish(pose);
		ros::spinOnce();
		rate.sleep();
	}
	mavros_msgs::SetMode offb_set_mode;
	offb_set_mode.request.custom_made = "OFFBOARD";


}

