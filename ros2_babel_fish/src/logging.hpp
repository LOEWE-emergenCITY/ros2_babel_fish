//
// Created by stefan on 03.08.21.
//

#ifndef ROS2_BABEL_FISH_LOGGING_MACROS_HPP
#define ROS2_BABEL_FISH_LOGGING_MACROS_HPP

#define RBF2_LOGGER ::rclcpp::get_logger( "ros2_babel_fish" )
#define RBF2_DEBUG( ... ) RCLCPP_DEBUG( RBF2_LOGGER, __VA_ARGS__ )
#define RBF2_DEBUG_ONCE( ... ) RCLCPP_DEBUG_ONCE( RBF2_LOGGER, __VA_ARGS__ )
#define RBF2_DEBUG_THROTTLE( ... ) RCLCPP_DEBUG_THROTTLE( RBF2_LOGGER, __VA_ARGS__ )
#define RBF2_DEBUG_STREAM( ... ) RCLCPP_DEBUG_STREAM( RBF2_LOGGER, __VA_ARGS__ )
#define RBF2_DEBUG_STREAM_ONCE( ... ) RCLCPP_DEBUG_STREAM_ONCE( RBF2_LOGGER, __VA_ARGS__ )
#define RBF2_DEBUG_STREAM_THROTTLE( ... ) RCLCPP_DEBUG_STREAM_THROTTLE( RBF2_LOGGER, __VA_ARGS__ )

#define RBF2_INFO( ... ) RCLCPP_INFO( RBF2_LOGGER, __VA_ARGS__ )
#define RBF2_INFO_ONCE( ... ) RCLCPP_INFO_ONCE( RBF2_LOGGER, __VA_ARGS__ )
#define RBF2_INFO_THROTTLE( ... ) RCLCPP_INFO_THROTTLE( RBF2_LOGGER, __VA_ARGS__ )
#define RBF2_INFO_STREAM( ... ) RCLCPP_INFO_STREAM( RBF2_LOGGER, __VA_ARGS__ )
#define RBF2_INFO_STREAM_ONCE( ... ) RCLCPP_INFO_STREAM_ONCE( RBF2_LOGGER, __VA_ARGS__ )
#define RBF2_INFO_STREAM_THROTTLE( ... ) RCLCPP_INFO_STREAM_THROTTLE( RBF2_LOGGER, __VA_ARGS__ )

#define RBF2_WARN( ... ) RCLCPP_WARN( RBF2_LOGGER, __VA_ARGS__ )
#define RBF2_WARN_ONCE( ... ) RCLCPP_WARN_ONCE( RBF2_LOGGER, __VA_ARGS__ )
#define RBF2_WARN_THROTTLE( ... ) RCLCPP_WARN_THROTTLE( RBF2_LOGGER, __VA_ARGS__ )
#define RBF2_WARN_STREAM( ... ) RCLCPP_WARN_STREAM( RBF2_LOGGER, __VA_ARGS__ )
#define RBF2_WARN_STREAM_ONCE( ... ) RCLCPP_WARN_STREAM_ONCE( RBF2_LOGGER, __VA_ARGS__ )
#define RBF2_WARN_STREAM_THROTTLE( ... ) RCLCPP_WARN_STREAM_THROTTLE( RBF2_LOGGER, __VA_ARGS__ )

#define RBF2_ERROR( ... ) RCLCPP_ERROR( RBF2_LOGGER, __VA_ARGS__ )
#define RBF2_ERROR_ONCE( ... ) RCLCPP_ERROR_ONCE( RBF2_LOGGER, __VA_ARGS__ )
#define RBF2_ERROR_THROTTLE( ... ) RCLCPP_ERROR_THROTTLE( RBF2_LOGGER, __VA_ARGS__ )
#define RBF2_ERROR_STREAM( ... ) RCLCPP_ERROR_STREAM( RBF2_LOGGER, __VA_ARGS__ )
#define RBF2_ERROR_STREAM_ONCE( ... ) RCLCPP_ERROR_STREAM_ONCE( RBF2_LOGGER, __VA_ARGS__ )
#define RBF2_ERROR_STREAM_THROTTLE( ... ) RCLCPP_ERROR_STREAM_THROTTLE( RBF2_LOGGER, __VA_ARGS__ )

#define RBF2_FATAL( ... ) RCLCPP_FATAL( RBF2_LOGGER, __VA_ARGS__ )
#define RBF2_FATAL_ONCE( ... ) RCLCPP_FATAL_ONCE( RBF2_LOGGER, __VA_ARGS__ )
#define RBF2_FATAL_THROTTLE( ... ) RCLCPP_FATAL_THROTTLE( RBF2_LOGGER, __VA_ARGS__ )
#define RBF2_FATAL_STREAM( ... ) RCLCPP_FATAL_STREAM( RBF2_LOGGER, __VA_ARGS__ )
#define RBF2_FATAL_STREAM_ONCE( ... ) RCLCPP_FATAL_STREAM_ONCE( RBF2_LOGGER, __VA_ARGS__ )
#define RBF2_FATAL_STREAM_THROTTLE( ... ) RCLCPP_FATAL_STREAM_THROTTLE( RBF2_LOGGER, __VA_ARGS__ )


#endif //ROS2_BABEL_FISH_LOGGING_MACROS_HPP
