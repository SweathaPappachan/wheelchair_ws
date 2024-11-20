// Generated by gencpp from file dwb_msgs/GetCriticScoreResponse.msg
// DO NOT EDIT!


#ifndef DWB_MSGS_MESSAGE_GETCRITICSCORERESPONSE_H
#define DWB_MSGS_MESSAGE_GETCRITICSCORERESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <dwb_msgs/CriticScore.h>

namespace dwb_msgs
{
template <class ContainerAllocator>
struct GetCriticScoreResponse_
{
  typedef GetCriticScoreResponse_<ContainerAllocator> Type;

  GetCriticScoreResponse_()
    : score()  {
    }
  GetCriticScoreResponse_(const ContainerAllocator& _alloc)
    : score(_alloc)  {
  (void)_alloc;
    }



   typedef  ::dwb_msgs::CriticScore_<ContainerAllocator>  _score_type;
  _score_type score;





  typedef boost::shared_ptr< ::dwb_msgs::GetCriticScoreResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dwb_msgs::GetCriticScoreResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetCriticScoreResponse_

typedef ::dwb_msgs::GetCriticScoreResponse_<std::allocator<void> > GetCriticScoreResponse;

typedef boost::shared_ptr< ::dwb_msgs::GetCriticScoreResponse > GetCriticScoreResponsePtr;
typedef boost::shared_ptr< ::dwb_msgs::GetCriticScoreResponse const> GetCriticScoreResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dwb_msgs::GetCriticScoreResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dwb_msgs::GetCriticScoreResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::dwb_msgs::GetCriticScoreResponse_<ContainerAllocator1> & lhs, const ::dwb_msgs::GetCriticScoreResponse_<ContainerAllocator2> & rhs)
{
  return lhs.score == rhs.score;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::dwb_msgs::GetCriticScoreResponse_<ContainerAllocator1> & lhs, const ::dwb_msgs::GetCriticScoreResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace dwb_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::dwb_msgs::GetCriticScoreResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dwb_msgs::GetCriticScoreResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dwb_msgs::GetCriticScoreResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dwb_msgs::GetCriticScoreResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dwb_msgs::GetCriticScoreResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dwb_msgs::GetCriticScoreResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dwb_msgs::GetCriticScoreResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "85cd9210199e99fbf9e008c47a7fcf65";
  }

  static const char* value(const ::dwb_msgs::GetCriticScoreResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x85cd9210199e99fbULL;
  static const uint64_t static_value2 = 0xf9e008c47a7fcf65ULL;
};

template<class ContainerAllocator>
struct DataType< ::dwb_msgs::GetCriticScoreResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dwb_msgs/GetCriticScoreResponse";
  }

  static const char* value(const ::dwb_msgs::GetCriticScoreResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dwb_msgs::GetCriticScoreResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "CriticScore score\n"
"\n"
"\n"
"================================================================================\n"
"MSG: dwb_msgs/CriticScore\n"
"# The result from one critic scoring a Twist.\n"
"# Name of the critic\n"
"string name\n"
"# Score for the critic, not multiplied by the scale\n"
"float32 raw_score\n"
"# Scale for the critic, multiplied by the raw_score and added to the total score\n"
"float32 scale\n"
;
  }

  static const char* value(const ::dwb_msgs::GetCriticScoreResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dwb_msgs::GetCriticScoreResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.score);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetCriticScoreResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dwb_msgs::GetCriticScoreResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dwb_msgs::GetCriticScoreResponse_<ContainerAllocator>& v)
  {
    s << indent << "score: ";
    s << std::endl;
    Printer< ::dwb_msgs::CriticScore_<ContainerAllocator> >::stream(s, indent + "  ", v.score);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DWB_MSGS_MESSAGE_GETCRITICSCORERESPONSE_H