// Generated by gencpp from file locomotor_msgs/ResultCode.msg
// DO NOT EDIT!


#ifndef LOCOMOTOR_MSGS_MESSAGE_RESULTCODE_H
#define LOCOMOTOR_MSGS_MESSAGE_RESULTCODE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace locomotor_msgs
{
template <class ContainerAllocator>
struct ResultCode_
{
  typedef ResultCode_<ContainerAllocator> Type;

  ResultCode_()
    : component(0)
    , result_code(0)
    , message()  {
    }
  ResultCode_(const ContainerAllocator& _alloc)
    : component(0)
    , result_code(0)
    , message(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _component_type;
  _component_type component;

   typedef int32_t _result_code_type;
  _result_code_type result_code;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _message_type;
  _message_type message;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(GLOBAL_COSTMAP)
  #undef GLOBAL_COSTMAP
#endif
#if defined(_WIN32) && defined(LOCAL_COSTMAP)
  #undef LOCAL_COSTMAP
#endif
#if defined(_WIN32) && defined(GLOBAL_PLANNER)
  #undef GLOBAL_PLANNER
#endif
#if defined(_WIN32) && defined(LOCAL_PLANNER)
  #undef LOCAL_PLANNER
#endif
#if defined(_WIN32) && defined(GENERIC_COSTMAP)
  #undef GENERIC_COSTMAP
#endif
#if defined(_WIN32) && defined(COSTMAP_SAFETY)
  #undef COSTMAP_SAFETY
#endif
#if defined(_WIN32) && defined(COSTMAP_DATA_LAG)
  #undef COSTMAP_DATA_LAG
#endif
#if defined(_WIN32) && defined(GENERIC_PLANNER)
  #undef GENERIC_PLANNER
#endif
#if defined(_WIN32) && defined(GENERIC_GLOBAL_PLANNER)
  #undef GENERIC_GLOBAL_PLANNER
#endif
#if defined(_WIN32) && defined(INVALID_START)
  #undef INVALID_START
#endif
#if defined(_WIN32) && defined(START_BOUNDS)
  #undef START_BOUNDS
#endif
#if defined(_WIN32) && defined(OCCUPIED_START)
  #undef OCCUPIED_START
#endif
#if defined(_WIN32) && defined(INVALID_GOAL)
  #undef INVALID_GOAL
#endif
#if defined(_WIN32) && defined(GOAL_BOUNDS)
  #undef GOAL_BOUNDS
#endif
#if defined(_WIN32) && defined(OCCUPIED_GOAL)
  #undef OCCUPIED_GOAL
#endif
#if defined(_WIN32) && defined(NO_GLOBAL_PATH)
  #undef NO_GLOBAL_PATH
#endif
#if defined(_WIN32) && defined(GLOBAL_PLANNER_TIMEOUT)
  #undef GLOBAL_PLANNER_TIMEOUT
#endif
#if defined(_WIN32) && defined(GENERIC_LOCAL_PLANNER)
  #undef GENERIC_LOCAL_PLANNER
#endif
#if defined(_WIN32) && defined(ILLEGAL_TRAJECTORY)
  #undef ILLEGAL_TRAJECTORY
#endif
#if defined(_WIN32) && defined(NO_LEGAL_TRAJECTORIES)
  #undef NO_LEGAL_TRAJECTORIES
#endif
#if defined(_WIN32) && defined(PLANNER_TF)
  #undef PLANNER_TF
#endif

  enum {
    GLOBAL_COSTMAP = 1,
    LOCAL_COSTMAP = 2,
    GLOBAL_PLANNER = 4,
    LOCAL_PLANNER = 8,
    GENERIC_COSTMAP = 0,
    COSTMAP_SAFETY = 1,
    COSTMAP_DATA_LAG = 2,
    GENERIC_PLANNER = 3,
    GENERIC_GLOBAL_PLANNER = 4,
    INVALID_START = 5,
    START_BOUNDS = 6,
    OCCUPIED_START = 7,
    INVALID_GOAL = 8,
    GOAL_BOUNDS = 9,
    OCCUPIED_GOAL = 10,
    NO_GLOBAL_PATH = 11,
    GLOBAL_PLANNER_TIMEOUT = 12,
    GENERIC_LOCAL_PLANNER = 13,
    ILLEGAL_TRAJECTORY = 14,
    NO_LEGAL_TRAJECTORIES = 15,
    PLANNER_TF = 16,
  };


  typedef boost::shared_ptr< ::locomotor_msgs::ResultCode_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::locomotor_msgs::ResultCode_<ContainerAllocator> const> ConstPtr;

}; // struct ResultCode_

typedef ::locomotor_msgs::ResultCode_<std::allocator<void> > ResultCode;

typedef boost::shared_ptr< ::locomotor_msgs::ResultCode > ResultCodePtr;
typedef boost::shared_ptr< ::locomotor_msgs::ResultCode const> ResultCodeConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::locomotor_msgs::ResultCode_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::locomotor_msgs::ResultCode_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::locomotor_msgs::ResultCode_<ContainerAllocator1> & lhs, const ::locomotor_msgs::ResultCode_<ContainerAllocator2> & rhs)
{
  return lhs.component == rhs.component &&
    lhs.result_code == rhs.result_code &&
    lhs.message == rhs.message;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::locomotor_msgs::ResultCode_<ContainerAllocator1> & lhs, const ::locomotor_msgs::ResultCode_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace locomotor_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::locomotor_msgs::ResultCode_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::locomotor_msgs::ResultCode_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::locomotor_msgs::ResultCode_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::locomotor_msgs::ResultCode_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::locomotor_msgs::ResultCode_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::locomotor_msgs::ResultCode_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::locomotor_msgs::ResultCode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9c162cbf5db9d590e1047c78cbd90371";
  }

  static const char* value(const ::locomotor_msgs::ResultCode_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9c162cbf5db9d590ULL;
  static const uint64_t static_value2 = 0xe1047c78cbd90371ULL;
};

template<class ContainerAllocator>
struct DataType< ::locomotor_msgs::ResultCode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "locomotor_msgs/ResultCode";
  }

  static const char* value(const ::locomotor_msgs::ResultCode_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::locomotor_msgs::ResultCode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This message contains three separate pieces.\n"
"#    A) A code indicating which component(s) the error originates from (bitmask style)\n"
"#    B) A code corresponding with the result_code defined in nav_core2/s.h\n"
"#    C) A freeform string message\n"
"\n"
"# The enumerations below are not necessarily the exclusive values for the codes.\n"
"# Others may implement additional values beyond the ones shown, using custom state machines.\n"
"\n"
"########### Component Values ###############################################\n"
"int32 GLOBAL_COSTMAP = 1\n"
"int32  LOCAL_COSTMAP = 2\n"
"int32 GLOBAL_PLANNER = 4\n"
"int32  LOCAL_PLANNER = 8\n"
"\n"
"########### Result Codes ###################################################\n"
"int32 GENERIC_COSTMAP=0\n"
"int32 COSTMAP_SAFETY=1\n"
"int32 COSTMAP_DATA_LAG=2\n"
"int32 GENERIC_PLANNER=3\n"
"int32 GENERIC_GLOBAL_PLANNER=4\n"
"int32 INVALID_START=5\n"
"int32 START_BOUNDS=6\n"
"int32 OCCUPIED_START=7\n"
"int32 INVALID_GOAL=8\n"
"int32 GOAL_BOUNDS=9\n"
"int32 OCCUPIED_GOAL=10\n"
"int32 NO_GLOBAL_PATH=11\n"
"int32 GLOBAL_PLANNER_TIMEOUT=12\n"
"int32 GENERIC_LOCAL_PLANNER=13\n"
"int32 ILLEGAL_TRAJECTORY=14\n"
"int32 NO_LEGAL_TRAJECTORIES=15\n"
"int32 PLANNER_TF=16\n"
"\n"
"########### Actual Data ####################################################\n"
"int32 component\n"
"int32 result_code\n"
"string message\n"
;
  }

  static const char* value(const ::locomotor_msgs::ResultCode_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::locomotor_msgs::ResultCode_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.component);
      stream.next(m.result_code);
      stream.next(m.message);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ResultCode_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::locomotor_msgs::ResultCode_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::locomotor_msgs::ResultCode_<ContainerAllocator>& v)
  {
    s << indent << "component: ";
    Printer<int32_t>::stream(s, indent + "  ", v.component);
    s << indent << "result_code: ";
    Printer<int32_t>::stream(s, indent + "  ", v.result_code);
    s << indent << "message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.message);
  }
};

} // namespace message_operations
} // namespace ros

#endif // LOCOMOTOR_MSGS_MESSAGE_RESULTCODE_H
