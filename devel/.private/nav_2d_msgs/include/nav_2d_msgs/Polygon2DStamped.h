// Generated by gencpp from file nav_2d_msgs/Polygon2DStamped.msg
// DO NOT EDIT!


#ifndef NAV_2D_MSGS_MESSAGE_POLYGON2DSTAMPED_H
#define NAV_2D_MSGS_MESSAGE_POLYGON2DSTAMPED_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <nav_2d_msgs/Polygon2D.h>

namespace nav_2d_msgs
{
template <class ContainerAllocator>
struct Polygon2DStamped_
{
  typedef Polygon2DStamped_<ContainerAllocator> Type;

  Polygon2DStamped_()
    : header()
    , polygon()  {
    }
  Polygon2DStamped_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , polygon(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::nav_2d_msgs::Polygon2D_<ContainerAllocator>  _polygon_type;
  _polygon_type polygon;





  typedef boost::shared_ptr< ::nav_2d_msgs::Polygon2DStamped_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nav_2d_msgs::Polygon2DStamped_<ContainerAllocator> const> ConstPtr;

}; // struct Polygon2DStamped_

typedef ::nav_2d_msgs::Polygon2DStamped_<std::allocator<void> > Polygon2DStamped;

typedef boost::shared_ptr< ::nav_2d_msgs::Polygon2DStamped > Polygon2DStampedPtr;
typedef boost::shared_ptr< ::nav_2d_msgs::Polygon2DStamped const> Polygon2DStampedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nav_2d_msgs::Polygon2DStamped_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nav_2d_msgs::Polygon2DStamped_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::nav_2d_msgs::Polygon2DStamped_<ContainerAllocator1> & lhs, const ::nav_2d_msgs::Polygon2DStamped_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.polygon == rhs.polygon;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::nav_2d_msgs::Polygon2DStamped_<ContainerAllocator1> & lhs, const ::nav_2d_msgs::Polygon2DStamped_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace nav_2d_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::nav_2d_msgs::Polygon2DStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nav_2d_msgs::Polygon2DStamped_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nav_2d_msgs::Polygon2DStamped_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nav_2d_msgs::Polygon2DStamped_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nav_2d_msgs::Polygon2DStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nav_2d_msgs::Polygon2DStamped_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nav_2d_msgs::Polygon2DStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c7d23ad8985ecc1a7be1fe0399ab384b";
  }

  static const char* value(const ::nav_2d_msgs::Polygon2DStamped_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc7d23ad8985ecc1aULL;
  static const uint64_t static_value2 = 0x7be1fe0399ab384bULL;
};

template<class ContainerAllocator>
struct DataType< ::nav_2d_msgs::Polygon2DStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nav_2d_msgs/Polygon2DStamped";
  }

  static const char* value(const ::nav_2d_msgs::Polygon2DStamped_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nav_2d_msgs::Polygon2DStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"Polygon2D polygon\n"
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
"\n"
"================================================================================\n"
"MSG: nav_2d_msgs/Polygon2D\n"
"Point2D[] points\n"
"\n"
"================================================================================\n"
"MSG: nav_2d_msgs/Point2D\n"
"float64 x\n"
"float64 y\n"
;
  }

  static const char* value(const ::nav_2d_msgs::Polygon2DStamped_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nav_2d_msgs::Polygon2DStamped_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.polygon);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Polygon2DStamped_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nav_2d_msgs::Polygon2DStamped_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nav_2d_msgs::Polygon2DStamped_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "polygon: ";
    s << std::endl;
    Printer< ::nav_2d_msgs::Polygon2D_<ContainerAllocator> >::stream(s, indent + "  ", v.polygon);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NAV_2D_MSGS_MESSAGE_POLYGON2DSTAMPED_H
