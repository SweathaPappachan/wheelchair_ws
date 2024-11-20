// Generated by gencpp from file xsens_msgs/gnssSample.msg
// DO NOT EDIT!


#ifndef XSENS_MSGS_MESSAGE_GNSSSAMPLE_H
#define XSENS_MSGS_MESSAGE_GNSSSAMPLE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Vector3.h>

namespace xsens_msgs
{
template <class ContainerAllocator>
struct gnssSample_
{
  typedef gnssSample_<ContainerAllocator> Type;

  gnssSample_()
    : header()
    , itow(0.0)
    , fix(0.0)
    , latitude(0.0)
    , longitude(0.0)
    , hEll(0.0)
    , hMsl(0.0)
    , vel()
    , hAcc(0.0)
    , vAcc(0.0)
    , sAcc(0.0)
    , pDop(0.0)
    , hDop(0.0)
    , vDop(0.0)
    , numSat(0.0)
    , heading(0.0)
    , headingAcc(0.0)  {
    }
  gnssSample_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , itow(0.0)
    , fix(0.0)
    , latitude(0.0)
    , longitude(0.0)
    , hEll(0.0)
    , hMsl(0.0)
    , vel(_alloc)
    , hAcc(0.0)
    , vAcc(0.0)
    , sAcc(0.0)
    , pDop(0.0)
    , hDop(0.0)
    , vDop(0.0)
    , numSat(0.0)
    , heading(0.0)
    , headingAcc(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _itow_type;
  _itow_type itow;

   typedef double _fix_type;
  _fix_type fix;

   typedef double _latitude_type;
  _latitude_type latitude;

   typedef double _longitude_type;
  _longitude_type longitude;

   typedef double _hEll_type;
  _hEll_type hEll;

   typedef double _hMsl_type;
  _hMsl_type hMsl;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _vel_type;
  _vel_type vel;

   typedef double _hAcc_type;
  _hAcc_type hAcc;

   typedef double _vAcc_type;
  _vAcc_type vAcc;

   typedef double _sAcc_type;
  _sAcc_type sAcc;

   typedef double _pDop_type;
  _pDop_type pDop;

   typedef double _hDop_type;
  _hDop_type hDop;

   typedef double _vDop_type;
  _vDop_type vDop;

   typedef double _numSat_type;
  _numSat_type numSat;

   typedef double _heading_type;
  _heading_type heading;

   typedef double _headingAcc_type;
  _headingAcc_type headingAcc;





  typedef boost::shared_ptr< ::xsens_msgs::gnssSample_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::xsens_msgs::gnssSample_<ContainerAllocator> const> ConstPtr;

}; // struct gnssSample_

typedef ::xsens_msgs::gnssSample_<std::allocator<void> > gnssSample;

typedef boost::shared_ptr< ::xsens_msgs::gnssSample > gnssSamplePtr;
typedef boost::shared_ptr< ::xsens_msgs::gnssSample const> gnssSampleConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::xsens_msgs::gnssSample_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::xsens_msgs::gnssSample_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::xsens_msgs::gnssSample_<ContainerAllocator1> & lhs, const ::xsens_msgs::gnssSample_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.itow == rhs.itow &&
    lhs.fix == rhs.fix &&
    lhs.latitude == rhs.latitude &&
    lhs.longitude == rhs.longitude &&
    lhs.hEll == rhs.hEll &&
    lhs.hMsl == rhs.hMsl &&
    lhs.vel == rhs.vel &&
    lhs.hAcc == rhs.hAcc &&
    lhs.vAcc == rhs.vAcc &&
    lhs.sAcc == rhs.sAcc &&
    lhs.pDop == rhs.pDop &&
    lhs.hDop == rhs.hDop &&
    lhs.vDop == rhs.vDop &&
    lhs.numSat == rhs.numSat &&
    lhs.heading == rhs.heading &&
    lhs.headingAcc == rhs.headingAcc;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::xsens_msgs::gnssSample_<ContainerAllocator1> & lhs, const ::xsens_msgs::gnssSample_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace xsens_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::xsens_msgs::gnssSample_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::xsens_msgs::gnssSample_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::xsens_msgs::gnssSample_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::xsens_msgs::gnssSample_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::xsens_msgs::gnssSample_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::xsens_msgs::gnssSample_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::xsens_msgs::gnssSample_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d0573311aa10335e691a2e99fd2b6d50";
  }

  static const char* value(const ::xsens_msgs::gnssSample_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd0573311aa10335eULL;
  static const uint64_t static_value2 = 0x691a2e99fd2b6d50ULL;
};

template<class ContainerAllocator>
struct DataType< ::xsens_msgs::gnssSample_<ContainerAllocator> >
{
  static const char* value()
  {
    return "xsens_msgs/gnssSample";
  }

  static const char* value(const ::xsens_msgs::gnssSample_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::xsens_msgs::gnssSample_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This is a message to hold data a GNSS unit\n"
"# Supported for MTi Devices with FW 1.4 and above.\n"
"\n"
"Header header\n"
"\n"
"float64 itow\n"
"float64 fix\n"
"\n"
"float64 latitude\n"
"float64 longitude\n"
"float64 hEll\n"
"float64 hMsl\n"
"\n"
"# ENU velocity\n"
"geometry_msgs/Vector3 vel\n"
"\n"
"float64 hAcc\n"
"float64 vAcc\n"
"float64 sAcc\n"
"\n"
"float64 pDop\n"
"float64 hDop\n"
"float64 vDop\n"
"\n"
"float64 numSat\n"
"float64 heading\n"
"float64 headingAcc\n"
"\n"
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

  static const char* value(const ::xsens_msgs::gnssSample_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::xsens_msgs::gnssSample_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.itow);
      stream.next(m.fix);
      stream.next(m.latitude);
      stream.next(m.longitude);
      stream.next(m.hEll);
      stream.next(m.hMsl);
      stream.next(m.vel);
      stream.next(m.hAcc);
      stream.next(m.vAcc);
      stream.next(m.sAcc);
      stream.next(m.pDop);
      stream.next(m.hDop);
      stream.next(m.vDop);
      stream.next(m.numSat);
      stream.next(m.heading);
      stream.next(m.headingAcc);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct gnssSample_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::xsens_msgs::gnssSample_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::xsens_msgs::gnssSample_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "itow: ";
    Printer<double>::stream(s, indent + "  ", v.itow);
    s << indent << "fix: ";
    Printer<double>::stream(s, indent + "  ", v.fix);
    s << indent << "latitude: ";
    Printer<double>::stream(s, indent + "  ", v.latitude);
    s << indent << "longitude: ";
    Printer<double>::stream(s, indent + "  ", v.longitude);
    s << indent << "hEll: ";
    Printer<double>::stream(s, indent + "  ", v.hEll);
    s << indent << "hMsl: ";
    Printer<double>::stream(s, indent + "  ", v.hMsl);
    s << indent << "vel: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.vel);
    s << indent << "hAcc: ";
    Printer<double>::stream(s, indent + "  ", v.hAcc);
    s << indent << "vAcc: ";
    Printer<double>::stream(s, indent + "  ", v.vAcc);
    s << indent << "sAcc: ";
    Printer<double>::stream(s, indent + "  ", v.sAcc);
    s << indent << "pDop: ";
    Printer<double>::stream(s, indent + "  ", v.pDop);
    s << indent << "hDop: ";
    Printer<double>::stream(s, indent + "  ", v.hDop);
    s << indent << "vDop: ";
    Printer<double>::stream(s, indent + "  ", v.vDop);
    s << indent << "numSat: ";
    Printer<double>::stream(s, indent + "  ", v.numSat);
    s << indent << "heading: ";
    Printer<double>::stream(s, indent + "  ", v.heading);
    s << indent << "headingAcc: ";
    Printer<double>::stream(s, indent + "  ", v.headingAcc);
  }
};

} // namespace message_operations
} // namespace ros

#endif // XSENS_MSGS_MESSAGE_GNSSSAMPLE_H
