/* DEFAULT PARAMETER VALUES */
const std::string default_subscribe_topic                                   = "pointcloud";
const int         default_subscribe_buffer_size                             = 1;
const bool        default_sensor_frame_has_z_axis_forward                   = true;
const double      default_ema_alpha                                         = 1.0; // no EMA
const std::string default_map_frame                                         = "map";
const std::string default_fixed_frame                                       = "odom";
const std::string default_base_frame                                        = "base_link";
const int         default_nr_scans_in_bank                                  = 0;
const double      default_optimize_nr_scans_in_bank                         = 0.5; // seconds
const double      default_bank_view_angle                                   = M_PI;
const int         default_nr_points_per_scan_in_bank                        = 360;
const bool        default_publish_objects                                   = true;
const bool        default_publish_ema                                       = true;
const bool        default_publish_objects_closest_points_markers            = true;
const bool        default_publish_objects_velocity_arrows                   = true;
const bool        default_publish_objects_delta_position_lines              = true;
const bool        default_publish_objects_width_lines                       = true;
const int         default_publish_buffer_size                               = 1;
const std::string default_topic_objects                                     = "moving_objects";
const std::string default_topic_ema                                         = "ema";
const std::string default_topic_objects_closest_points_markers              = "objects_closest_point_markers";
const std::string default_topic_objects_velocity_arrows                     = "objects_velocity_arrows";
const std::string default_topic_objects_delta_position_lines                = "objects_delta_position_lines";
const std::string default_topic_objects_width_lines                         = "objects_width_lines";
const std::string default_ns_velocity_arrows                                = "velocity_arrows";
const std::string default_ns_delta_position_lines                           = "delta_position_lines";
const std::string default_ns_width_lines                                    = "width_lines";
const bool        default_velocity_arrows_use_full_gray_scale               = false;
const bool        default_velocity_arrows_use_sensor_frame                  = false;
const bool        default_velocity_arrows_use_base_frame                    = false;
const bool        default_velocity_arrows_use_fixed_frame                   = false;
const std::string default_message_x_coordinate_field_name                   = "x";
const std::string default_message_y_coordinate_field_name                   = "y";
const std::string default_message_z_coordinate_field_name                   = "z";
const double      default_voxel_leaf_size                                   = 0.01;
const double      default_threshold_z_min                                   = 0.0;
const double      default_threshold_z_max                                   = 1.0;
const double      default_object_threshold_edge_max_delta_range             = 0.15;
const int         default_object_threshold_min_nr_points                    = 3;
const double      default_object_threshold_max_distance                     = 6.5;
const double      default_object_threshold_min_speed                        = 0.1;
const int         default_object_threshold_max_delta_width_in_points        = 15;
const double      default_object_threshold_bank_tracking_max_delta_distance = 0.4;
const double      default_object_threshold_min_confidence                   = 0.7;
const double      default_base_confidence                                   = 0.3;
