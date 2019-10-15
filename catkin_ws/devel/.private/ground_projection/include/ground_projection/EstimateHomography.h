// Generated by gencpp from file ground_projection/EstimateHomography.msg
// DO NOT EDIT!


#ifndef GROUND_PROJECTION_MESSAGE_ESTIMATEHOMOGRAPHY_H
#define GROUND_PROJECTION_MESSAGE_ESTIMATEHOMOGRAPHY_H

#include <ros/service_traits.h>


#include <ground_projection/EstimateHomographyRequest.h>
#include <ground_projection/EstimateHomographyResponse.h>


namespace ground_projection
{

struct EstimateHomography
{

typedef EstimateHomographyRequest Request;
typedef EstimateHomographyResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct EstimateHomography
} // namespace ground_projection


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::ground_projection::EstimateHomography > {
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::ground_projection::EstimateHomography&) { return value(); }
};

template<>
struct DataType< ::ground_projection::EstimateHomography > {
  static const char* value()
  {
    return "ground_projection/EstimateHomography";
  }

  static const char* value(const ::ground_projection::EstimateHomography&) { return value(); }
};


// service_traits::MD5Sum< ::ground_projection::EstimateHomographyRequest> should match 
// service_traits::MD5Sum< ::ground_projection::EstimateHomography > 
template<>
struct MD5Sum< ::ground_projection::EstimateHomographyRequest>
{
  static const char* value()
  {
    return MD5Sum< ::ground_projection::EstimateHomography >::value();
  }
  static const char* value(const ::ground_projection::EstimateHomographyRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::ground_projection::EstimateHomographyRequest> should match 
// service_traits::DataType< ::ground_projection::EstimateHomography > 
template<>
struct DataType< ::ground_projection::EstimateHomographyRequest>
{
  static const char* value()
  {
    return DataType< ::ground_projection::EstimateHomography >::value();
  }
  static const char* value(const ::ground_projection::EstimateHomographyRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::ground_projection::EstimateHomographyResponse> should match 
// service_traits::MD5Sum< ::ground_projection::EstimateHomography > 
template<>
struct MD5Sum< ::ground_projection::EstimateHomographyResponse>
{
  static const char* value()
  {
    return MD5Sum< ::ground_projection::EstimateHomography >::value();
  }
  static const char* value(const ::ground_projection::EstimateHomographyResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::ground_projection::EstimateHomographyResponse> should match 
// service_traits::DataType< ::ground_projection::EstimateHomography > 
template<>
struct DataType< ::ground_projection::EstimateHomographyResponse>
{
  static const char* value()
  {
    return DataType< ::ground_projection::EstimateHomography >::value();
  }
  static const char* value(const ::ground_projection::EstimateHomographyResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // GROUND_PROJECTION_MESSAGE_ESTIMATEHOMOGRAPHY_H
