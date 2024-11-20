// Generated by gencpp from file dwb_msgs/GetCriticScore.msg
// DO NOT EDIT!


#ifndef DWB_MSGS_MESSAGE_GETCRITICSCORE_H
#define DWB_MSGS_MESSAGE_GETCRITICSCORE_H

#include <ros/service_traits.h>


#include <dwb_msgs/GetCriticScoreRequest.h>
#include <dwb_msgs/GetCriticScoreResponse.h>


namespace dwb_msgs
{

struct GetCriticScore
{

typedef GetCriticScoreRequest Request;
typedef GetCriticScoreResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetCriticScore
} // namespace dwb_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::dwb_msgs::GetCriticScore > {
  static const char* value()
  {
    return "b1f1b575d22e5c30bc2da24ae85dfca1";
  }

  static const char* value(const ::dwb_msgs::GetCriticScore&) { return value(); }
};

template<>
struct DataType< ::dwb_msgs::GetCriticScore > {
  static const char* value()
  {
    return "dwb_msgs/GetCriticScore";
  }

  static const char* value(const ::dwb_msgs::GetCriticScore&) { return value(); }
};


// service_traits::MD5Sum< ::dwb_msgs::GetCriticScoreRequest> should match
// service_traits::MD5Sum< ::dwb_msgs::GetCriticScore >
template<>
struct MD5Sum< ::dwb_msgs::GetCriticScoreRequest>
{
  static const char* value()
  {
    return MD5Sum< ::dwb_msgs::GetCriticScore >::value();
  }
  static const char* value(const ::dwb_msgs::GetCriticScoreRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::dwb_msgs::GetCriticScoreRequest> should match
// service_traits::DataType< ::dwb_msgs::GetCriticScore >
template<>
struct DataType< ::dwb_msgs::GetCriticScoreRequest>
{
  static const char* value()
  {
    return DataType< ::dwb_msgs::GetCriticScore >::value();
  }
  static const char* value(const ::dwb_msgs::GetCriticScoreRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::dwb_msgs::GetCriticScoreResponse> should match
// service_traits::MD5Sum< ::dwb_msgs::GetCriticScore >
template<>
struct MD5Sum< ::dwb_msgs::GetCriticScoreResponse>
{
  static const char* value()
  {
    return MD5Sum< ::dwb_msgs::GetCriticScore >::value();
  }
  static const char* value(const ::dwb_msgs::GetCriticScoreResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::dwb_msgs::GetCriticScoreResponse> should match
// service_traits::DataType< ::dwb_msgs::GetCriticScore >
template<>
struct DataType< ::dwb_msgs::GetCriticScoreResponse>
{
  static const char* value()
  {
    return DataType< ::dwb_msgs::GetCriticScore >::value();
  }
  static const char* value(const ::dwb_msgs::GetCriticScoreResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // DWB_MSGS_MESSAGE_GETCRITICSCORE_H
