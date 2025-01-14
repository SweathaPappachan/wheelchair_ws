// Generated by gencpp from file xsens_msgs/baroSample.msg
// DO NOT EDIT!


#ifndef XSENS_MSGS_MESSAGE_BAROSAMPLE_H
#define XSENS_MSGS_MESSAGE_BAROSAMPLE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace xsens_msgs
{
template <class ContainerAllocator>
struct baroSample_
{
  typedef baroSample_<ContainerAllocator> Type;

  baroSample_()
    : header()
    , height(0.0)  {
    }
  baroSample_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , height(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _height_type;
  _height_type height;





  typedef boost::shared_ptr< ::xsens_msgs::baroSample_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::xsens_msgs::baroSample_<ContainerAllocator> const> ConstPtr;

}; // struct baroSample_

typedef ::xsens_msgs::baroSample_<std::allocator<void> > baroSample;

typedef boost::shared_ptr< ::xsens_msgs::baroSample > baroSamplePtr;
typedef boost::shared_ptr< ::xsens_msgs::baroSample const> baroSampleConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::xsens_msgs::baroSample_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::xsens_msgs::baroSample_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::xsens_msgs::baroSample_<ContainerAllocator1> & lhs, const ::xsens_msgs::baroSample_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.height == rhs.height;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::xsens_msgs::baroSample_<ContainerAllocator1> & lhs, const ::xsens_msgs::baroSample_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace xsens_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::xsens_msgs::baroSample_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::xsens_msgs::baroSample_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::xsens_msgs::baroSample_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::xsens_msgs::baroSample_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::xsens_msgs::baroSample_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::xsens_msgs::baroSample_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::xsens_msgs::baroSample_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1b96bb17a3786a696442a57cb0232657";
  }

  static const char* value(const ::xsens_msgs::baroSample_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1b96bb17a3786a69ULL;
  static const uint64_t static_value2 = 0x6442a57cb0232657ULL;
};

template<class ContainerAllocator>
struct DataType< ::xsens_msgs::baroSample_<ContainerAllocator> >
{
  static const char* value()
  {
    return "xsens_msgs/baroSample";
  }

  static const char* value(const ::xsens_msgs::baroSample_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::xsens_msgs::baroSample_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This is a message to hold data from a baro \n"
"\n"
"Header header\n"
"\n"
"float64 height\n"
"\n"
"\n"
"\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::xsens_msgs::baroSample_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::xsens_msgs::baroSample_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.height);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct baroSample_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::xsens_msgs::baroSample_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::xsens_msgs::baroSample_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "height: ";
    Printer<double>::stream(s, indent + "  ", v.height);
  }
};

} // namespace message_operations
} // namespace ros

#endif // XSENS_MSGS_MESSAGE_BAROSAMPLE_H
