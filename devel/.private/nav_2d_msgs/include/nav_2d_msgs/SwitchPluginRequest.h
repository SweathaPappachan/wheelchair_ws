// Generated by gencpp from file nav_2d_msgs/SwitchPluginRequest.msg
// DO NOT EDIT!


#ifndef NAV_2D_MSGS_MESSAGE_SWITCHPLUGINREQUEST_H
#define NAV_2D_MSGS_MESSAGE_SWITCHPLUGINREQUEST_H


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
struct SwitchPluginRequest_
{
  typedef SwitchPluginRequest_<ContainerAllocator> Type;

  SwitchPluginRequest_()
    : new_plugin()  {
    }
  SwitchPluginRequest_(const ContainerAllocator& _alloc)
    : new_plugin(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _new_plugin_type;
  _new_plugin_type new_plugin;





  typedef boost::shared_ptr< ::nav_2d_msgs::SwitchPluginRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nav_2d_msgs::SwitchPluginRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SwitchPluginRequest_

typedef ::nav_2d_msgs::SwitchPluginRequest_<std::allocator<void> > SwitchPluginRequest;

typedef boost::shared_ptr< ::nav_2d_msgs::SwitchPluginRequest > SwitchPluginRequestPtr;
typedef boost::shared_ptr< ::nav_2d_msgs::SwitchPluginRequest const> SwitchPluginRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nav_2d_msgs::SwitchPluginRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nav_2d_msgs::SwitchPluginRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::nav_2d_msgs::SwitchPluginRequest_<ContainerAllocator1> & lhs, const ::nav_2d_msgs::SwitchPluginRequest_<ContainerAllocator2> & rhs)
{
  return lhs.new_plugin == rhs.new_plugin;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::nav_2d_msgs::SwitchPluginRequest_<ContainerAllocator1> & lhs, const ::nav_2d_msgs::SwitchPluginRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace nav_2d_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::nav_2d_msgs::SwitchPluginRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nav_2d_msgs::SwitchPluginRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nav_2d_msgs::SwitchPluginRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nav_2d_msgs::SwitchPluginRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nav_2d_msgs::SwitchPluginRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nav_2d_msgs::SwitchPluginRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nav_2d_msgs::SwitchPluginRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d89ec9b6d29038f89e1e1ed70f9eeeeb";
  }

  static const char* value(const ::nav_2d_msgs::SwitchPluginRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd89ec9b6d29038f8ULL;
  static const uint64_t static_value2 = 0x9e1e1ed70f9eeeebULL;
};

template<class ContainerAllocator>
struct DataType< ::nav_2d_msgs::SwitchPluginRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nav_2d_msgs/SwitchPluginRequest";
  }

  static const char* value(const ::nav_2d_msgs::SwitchPluginRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nav_2d_msgs::SwitchPluginRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string new_plugin\n"
;
  }

  static const char* value(const ::nav_2d_msgs::SwitchPluginRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nav_2d_msgs::SwitchPluginRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.new_plugin);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SwitchPluginRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nav_2d_msgs::SwitchPluginRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nav_2d_msgs::SwitchPluginRequest_<ContainerAllocator>& v)
  {
    s << indent << "new_plugin: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.new_plugin);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NAV_2D_MSGS_MESSAGE_SWITCHPLUGINREQUEST_H
