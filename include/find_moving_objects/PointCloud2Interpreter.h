#include <ros/ros.h>
#include <sensor_msgs/PointCloud2.h>
#include <find_moving_objects/bank.h>

#ifdef NODELET
#include <nodelet/nodelet.h>
#endif

namespace find_moving_objects
{

#ifdef NODELET
class PointCloud2InterpreterNodelet : public nodelet::Nodelet
#endif
#ifdef NODE
class PointCloud2InterpreterNode
#endif
{
private:
  /* DEFAULT PARAMETER VALUES */
  #include "pointcloud2_interpreter_default_parameter_values.h"
  
  /* SUBSCRIBER */
  ros::Subscriber sub;
  std::string subscribe_topic;
  int subscribe_buffer_size;
  
  /* HZ CALCULATION */
  double optimize_nr_scans_in_bank;
  int received_messages;
  const int max_messages = 100;
  double start_time;
  const double max_time = 1.5;
  
  /* BANK AND ARGUMENT */
  Bank * bank;
  BankArgument bank_argument;

  /* CALLBACK FOR FIRST MESSAGE */
  void pointCloud2CallbackFirst(const sensor_msgs::PointCloud2::ConstPtr & msg);
  
  /* CALLBACK FOR ALL BUT THE FIRST MESSAGE */
  void pointCloud2Callback(const sensor_msgs::PointCloud2::ConstPtr & msg);
  
  /* CALLBACK FOR WAITING UNTIL THE FIRST MESSAGE WAS RECEIVED - HZ CALCULATION */
  void waitForFirstMessageCallback(const sensor_msgs::PointCloud2::ConstPtr & msg);
  
  /* CALLBACK FOR HZ CALCULATION */
  void hzCalculationCallback(const sensor_msgs::PointCloud2::ConstPtr & msg);
  
public:
  /* CONSTRUCTOR & DESTRUCTOR */
#ifdef NODELET
  PointCloud2InterpreterNodelet();
  ~PointCloud2InterpreterNodelet();
  
  virtual void onInit();
#endif
#ifdef NODE
  PointCloud2InterpreterNode();
  ~PointCloud2InterpreterNode();
  
  void onInit();
#endif
};

} // namespace find_moving_objects
