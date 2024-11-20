// Generated by gencpp from file xsens_msgs/ImuSensorSample.msg
// DO NOT EDIT!


#ifndef XSENS_MSGS_MESSAGE_IMUSENSORSAMPLE_H
#define XSENS_MSGS_MESSAGE_IMUSENSORSAMPLE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <xsens_msgs/XsensQuaternion.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>

namespace xsens_msgs
{
template <class ContainerAllocator>
struct ImuSensorSample_
{
  typedef ImuSensorSample_<ContainerAllocator> Type;

  ImuSensorSample_()
    : dq()
    , dv()
    , bGyr()  {
    }
  ImuSensorSample_(const ContainerAllocator& _alloc)
    : dq(_alloc)
    , dv(_alloc)
    , bGyr(_alloc)  {
  (void)_alloc;
    }



   typedef  ::xsens_msgs::XsensQuaternion_<ContainerAllocator>  _dq_type;
  _dq_type dq;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _dv_type;
  _dv_type dv;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _bGyr_type;
  _bGyr_type bGyr;





  typedef boost::shared_ptr< ::xsens_msgs::ImuSensorSample_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::xsens_msgs::ImuSensorSample_<ContainerAllocator> const> ConstPtr;

}; // struct ImuSensorSample_

typedef ::xsens_msgs::ImuSensorSample_<std::allocator<void> > ImuSensorSample;

typedef boost::shared_ptr< ::xsens_msgs::ImuSensorSample > ImuSensorSamplePtr;
typedef boost::shared_ptr< ::xsens_msgs::ImuSensorSample const> ImuSensorSampleConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::xsens_msgs::ImuSensorSample_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::xsens_msgs::ImuSensorSample_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::xsens_msgs::ImuSensorSample_<ContainerAllocator1> & lhs, const ::xsens_msgs::ImuSensorSample_<ContainerAllocator2> & rhs)
{
  return lhs.dq == rhs.dq &&
    lhs.dv == rhs.dv &&
    lhs.bGyr == rhs.bGyr;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::xsens_msgs::ImuSensorSample_<ContainerAllocator1> & lhs, const ::xsens_msgs::ImuSensorSample_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace xsens_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::xsens_msgs::ImuSensorSample_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::xsens_msgs::ImuSensorSample_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::xsens_msgs::ImuSensorSample_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::xsens_msgs::ImuSensorSample_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::xsens_msgs::ImuSensorSample_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::xsens_msgs::ImuSensorSample_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::xsens_msgs::ImuSensorSample_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4cafe678792d03390e2d87979096a4f3";
  }

  static const char* value(const ::xsens_msgs::ImuSensorSample_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4cafe678792d0339ULL;
  static const uint64_t static_value2 = 0x0e2d87979096a4f3ULL;
};

template<class ContainerAllocator>
struct DataType< ::xsens_msgs::ImuSensorSample_<ContainerAllocator> >
{
  static const char* value()
  {
    return "xsens_msgs/ImuSensorSample";
  }

  static const char* value(const ::xsens_msgs::ImuSensorSample_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::xsens_msgs::ImuSensorSample_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This is a message to hold data from an IMU (Inertial Measurement Unit)\n"
"#\n"
"# Accelerations should be in m/s^2 (not in g's), and rotational velocity should be in rad/sec\n"
"#\n"
"# If the covariance of the measurement is known, it should be filled in (if all you know is the \n"
"# variance of each measurement, e.g. from the datasheet, just put those along the diagonal)\n"
"# A covariance matrix of all zeros will be interpreted as \"covariance unknown\", and to use the\n"
"# data a covariance will have to be assumed or gotten from some other source\n"
"#\n"
"# If you have no estimate for one of the data elements (e.g. your IMU doesn't produce an orientation \n"
"# estimate), please set element 0 of the associated covariance matrix to -1\n"
"# If you are interpreting this message, please check for a value of -1 in the first element of each \n"
"# covariance matrix, and disregard the associated estimate.\n"
"\n"
"XsensQuaternion dq\n"
"\n"
"geometry_msgs/Vector3 dv\n"
"\n"
"geometry_msgs/Vector3 bGyr\n"
"\n"
"\n"
"\n"
"\n"
"================================================================================\n"
"MSG: xsens_msgs/XsensQuaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 w\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::xsens_msgs::ImuSensorSample_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::xsens_msgs::ImuSensorSample_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.dq);
      stream.next(m.dv);
      stream.next(m.bGyr);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ImuSensorSample_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::xsens_msgs::ImuSensorSample_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::xsens_msgs::ImuSensorSample_<ContainerAllocator>& v)
  {
    s << indent << "dq: ";
    s << std::endl;
    Printer< ::xsens_msgs::XsensQuaternion_<ContainerAllocator> >::stream(s, indent + "  ", v.dq);
    s << indent << "dv: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.dv);
    s << indent << "bGyr: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.bGyr);
  }
};

} // namespace message_operations
} // namespace ros

#endif // XSENS_MSGS_MESSAGE_IMUSENSORSAMPLE_H