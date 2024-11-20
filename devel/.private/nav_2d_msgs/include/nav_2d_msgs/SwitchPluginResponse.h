// Generated by gencpp from file nav_2d_msgs/SwitchPluginResponse.msg
// DO NOT EDIT!


#ifndef NAV_2D_MSGS_MESSAGE_SWITCHPLUGINRESPONSE_H
#define NAV_2D_MSGS_MESSAGE_SWITCHPLUGINRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace nav_2d_msgs
{
template <class ContainerAllocator>
struct SwitchPluginResponse_
{
  typedef SwitchPluginResponse_<ContainerAllocator> Type;

  SwitchPluginResponse_()
    : success(false)
    , message()  {
    }
  SwitchPluginResponse_(const ContainerAllocator& _alloc)
    : success(false)
    , message(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _message_type;
  _message_type message;





  typedef boost::shared_ptr< ::nav_2d_msgs::SwitchPluginResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nav_2d_msgs::SwitchPluginResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SwitchPluginResponse_

typedef ::nav_2d_msgs::SwitchPluginResponse_<std::allocator<void> > SwitchPluginResponse;

typedef boost::shared_ptr< ::nav_2d_msgs::SwitchPluginResponse > SwitchPluginResponsePtr;
typedef boost::shared_ptr< ::nav_2d_msgs::SwitchPluginResponse const> SwitchPluginResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nav_2d_msgs::SwitchPluginResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nav_2d_msgs::SwitchPluginResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::nav_2d_msgs::SwitchPluginResponse_<ContainerAllocator1> & lhs, const ::nav_2d_msgs::SwitchPluginResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success &&
    lhs.message == rhs.message;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::nav_2d_msgs::SwitchPluginResponse_<ContainerAllocator1> & lhs, const ::nav_2d_msgs::SwitchPluginResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace nav_2d_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::nav_2d_msgs::SwitchPluginResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nav_2d_msgs::SwitchPluginResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nav_2d_msgs::SwitchPluginResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nav_2d_msgs::SwitchPluginResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nav_2d_msgs::SwitchPluginResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nav_2d_msgs::SwitchPluginResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nav_2d_msgs::SwitchPluginResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "937c9679a518e3a18d831e57125ea522";
  }

  static const char* value(const ::nav_2d_msgs::SwitchPluginResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x937c9679a518e3a1ULL;
  static const uint64_t static_value2 = 0x8d831e57125ea522ULL;
};

template<class ContainerAllocator>
struct DataType< ::nav_2d_msgs::SwitchPluginResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nav_2d_msgs/SwitchPluginResponse";
  }

  static const char* value(const ::nav_2d_msgs::SwitchPluginResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nav_2d_msgs::SwitchPluginResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n"
"string message\n"
"\n"
;
  }

  static const char* value(const ::nav_2d_msgs::SwitchPluginResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nav_2d_msgs::SwitchPluginResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
      stream.next(m.message);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SwitchPluginResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nav_2d_msgs::SwitchPluginResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nav_2d_msgs::SwitchPluginResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.message);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NAV_2D_MSGS_MESSAGE_SWITCHPLUGINRESPONSE_H