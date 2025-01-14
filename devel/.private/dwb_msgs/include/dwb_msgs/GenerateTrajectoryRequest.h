// Generated by gencpp from file dwb_msgs/GenerateTrajectoryRequest.msg
// DO NOT EDIT!


#ifndef DWB_MSGS_MESSAGE_GENERATETRAJECTORYREQUEST_H
#define DWB_MSGS_MESSAGE_GENERATETRAJECTORYREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose2D.h>
#include <nav_2d_msgs/Twist2D.h>
#include <nav_2d_msgs/Twist2D.h>

namespace dwb_msgs
{
template <class ContainerAllocator>
struct GenerateTrajectoryRequest_
{
  typedef GenerateTrajectoryRequest_<ContainerAllocator> Type;

  GenerateTrajectoryRequest_()
    : start_pose()
    , start_vel()
    , cmd_vel()  {
    }
  GenerateTrajectoryRequest_(const ContainerAllocator& _alloc)
    : start_pose(_alloc)
    , start_vel(_alloc)
    , cmd_vel(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Pose2D_<ContainerAllocator>  _start_pose_type;
  _start_pose_type start_pose;

   typedef  ::nav_2d_msgs::Twist2D_<ContainerAllocator>  _start_vel_type;
  _start_vel_type start_vel;

   typedef  ::nav_2d_msgs::Twist2D_<ContainerAllocator>  _cmd_vel_type;
  _cmd_vel_type cmd_vel;





  typedef boost::shared_ptr< ::dwb_msgs::GenerateTrajectoryRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dwb_msgs::GenerateTrajectoryRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GenerateTrajectoryRequest_

typedef ::dwb_msgs::GenerateTrajectoryRequest_<std::allocator<void> > GenerateTrajectoryRequest;

typedef boost::shared_ptr< ::dwb_msgs::GenerateTrajectoryRequest > GenerateTrajectoryRequestPtr;
typedef boost::shared_ptr< ::dwb_msgs::GenerateTrajectoryRequest const> GenerateTrajectoryRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dwb_msgs::GenerateTrajectoryRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dwb_msgs::GenerateTrajectoryRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dwb_msgs::GenerateTrajectoryRequest_<ContainerAllocator1> & lhs, const ::dwb_msgs::GenerateTrajectoryRequest_<ContainerAllocator2> & rhs)
{
  return lhs.start_pose == rhs.start_pose &&
    lhs.start_vel == rhs.start_vel &&
    lhs.cmd_vel == rhs.cmd_vel;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dwb_msgs::GenerateTrajectoryRequest_<ContainerAllocator1> & lhs, const ::dwb_msgs::GenerateTrajectoryRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dwb_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::dwb_msgs::GenerateTrajectoryRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dwb_msgs::GenerateTrajectoryRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dwb_msgs::GenerateTrajectoryRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dwb_msgs::GenerateTrajectoryRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dwb_msgs::GenerateTrajectoryRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dwb_msgs::GenerateTrajectoryRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dwb_msgs::GenerateTrajectoryRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c12676b96c40b5308f43475d17c2db1c";
  }

  static const char* value(const ::dwb_msgs::GenerateTrajectoryRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc12676b96c40b530ULL;
  static const uint64_t static_value2 = 0x8f43475d17c2db1cULL;
};

template<class ContainerAllocator>
struct DataType< ::dwb_msgs::GenerateTrajectoryRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dwb_msgs/GenerateTrajectoryRequest";
  }

  static const char* value(const ::dwb_msgs::GenerateTrajectoryRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dwb_msgs::GenerateTrajectoryRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# For a given start pose, velocity and desired velocity, generate which poses will be visited\n"
"geometry_msgs/Pose2D start_pose\n"
"nav_2d_msgs/Twist2D start_vel\n"
"nav_2d_msgs/Twist2D cmd_vel\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose2D\n"
"# Deprecated\n"
"# Please use the full 3D pose.\n"
"\n"
"# In general our recommendation is to use a full 3D representation of everything and for 2D specific applications make the appropriate projections into the plane for their calculations but optimally will preserve the 3D information during processing.\n"
"\n"
"# If we have parallel copies of 2D datatypes every UI and other pipeline will end up needing to have dual interfaces to plot everything. And you will end up with not being able to use 3D tools for 2D use cases even if they're completely valid, as you'd have to reimplement it with different inputs and outputs. It's not particularly hard to plot the 2D pose or compute the yaw error for the Pose message and there are already tools and libraries that can do this for you.\n"
"\n"
"\n"
"# This expresses a position and orientation on a 2D manifold.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 theta\n"
"\n"
"================================================================================\n"
"MSG: nav_2d_msgs/Twist2D\n"
"float64 x\n"
"float64 y\n"
"float64 theta\n"
;
  }

  static const char* value(const ::dwb_msgs::GenerateTrajectoryRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dwb_msgs::GenerateTrajectoryRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.start_pose);
      stream.next(m.start_vel);
      stream.next(m.cmd_vel);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GenerateTrajectoryRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dwb_msgs::GenerateTrajectoryRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dwb_msgs::GenerateTrajectoryRequest_<ContainerAllocator>& v)
  {
    s << indent << "start_pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose2D_<ContainerAllocator> >::stream(s, indent + "  ", v.start_pose);
    s << indent << "start_vel: ";
    s << std::endl;
    Printer< ::nav_2d_msgs::Twist2D_<ContainerAllocator> >::stream(s, indent + "  ", v.start_vel);
    s << indent << "cmd_vel: ";
    s << std::endl;
    Printer< ::nav_2d_msgs::Twist2D_<ContainerAllocator> >::stream(s, indent + "  ", v.cmd_vel);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DWB_MSGS_MESSAGE_GENERATETRAJECTORYREQUEST_H
