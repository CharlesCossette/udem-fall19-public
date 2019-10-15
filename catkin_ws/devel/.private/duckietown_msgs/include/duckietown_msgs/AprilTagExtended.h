// Generated by gencpp from file duckietown_msgs/AprilTagExtended.msg
// DO NOT EDIT!


#ifndef DUCKIETOWN_MSGS_MESSAGE_APRILTAGEXTENDED_H
#define DUCKIETOWN_MSGS_MESSAGE_APRILTAGEXTENDED_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Transform.h>

namespace duckietown_msgs
{
template <class ContainerAllocator>
struct AprilTagExtended_
{
  typedef AprilTagExtended_<ContainerAllocator> Type;

  AprilTagExtended_()
    : header()
    , transform()
    , tag_id(0)
    , tag_family()
    , hamming(0)
    , decision_margin(0.0)
    , homography()
    , center()
    , corners()
    , pose_error(0.0)  {
      homography.assign(0.0);

      center.assign(0.0);

      corners.assign(0.0);
  }
  AprilTagExtended_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , transform(_alloc)
    , tag_id(0)
    , tag_family(_alloc)
    , hamming(0)
    , decision_margin(0.0)
    , homography()
    , center()
    , corners()
    , pose_error(0.0)  {
  (void)_alloc;
      homography.assign(0.0);

      center.assign(0.0);

      corners.assign(0.0);
  }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::geometry_msgs::Transform_<ContainerAllocator>  _transform_type;
  _transform_type transform;

   typedef int32_t _tag_id_type;
  _tag_id_type tag_id;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _tag_family_type;
  _tag_family_type tag_family;

   typedef int32_t _hamming_type;
  _hamming_type hamming;

   typedef float _decision_margin_type;
  _decision_margin_type decision_margin;

   typedef boost::array<float, 9>  _homography_type;
  _homography_type homography;

   typedef boost::array<float, 2>  _center_type;
  _center_type center;

   typedef boost::array<float, 8>  _corners_type;
  _corners_type corners;

   typedef float _pose_error_type;
  _pose_error_type pose_error;





  typedef boost::shared_ptr< ::duckietown_msgs::AprilTagExtended_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::duckietown_msgs::AprilTagExtended_<ContainerAllocator> const> ConstPtr;

}; // struct AprilTagExtended_

typedef ::duckietown_msgs::AprilTagExtended_<std::allocator<void> > AprilTagExtended;

typedef boost::shared_ptr< ::duckietown_msgs::AprilTagExtended > AprilTagExtendedPtr;
typedef boost::shared_ptr< ::duckietown_msgs::AprilTagExtended const> AprilTagExtendedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::duckietown_msgs::AprilTagExtended_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::duckietown_msgs::AprilTagExtended_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace duckietown_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'sensor_msgs': ['/opt/ros/melodic/share/sensor_msgs/cmake/../msg'], 'duckietown_msgs': ['/duckietown/catkin_ws/src/dt-ros-commons/packages/duckietown_msgs/msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::AprilTagExtended_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::duckietown_msgs::AprilTagExtended_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::AprilTagExtended_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::duckietown_msgs::AprilTagExtended_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::AprilTagExtended_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::duckietown_msgs::AprilTagExtended_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::duckietown_msgs::AprilTagExtended_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1ca0d2f82762ea5d7ea60150ab894e3f";
  }

  static const char* value(const ::duckietown_msgs::AprilTagExtended_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1ca0d2f82762ea5dULL;
  static const uint64_t static_value2 = 0x7ea60150ab894e3fULL;
};

template<class ContainerAllocator>
struct DataType< ::duckietown_msgs::AprilTagExtended_<ContainerAllocator> >
{
  static const char* value()
  {
    return "duckietown_msgs/AprilTagExtended";
  }

  static const char* value(const ::duckietown_msgs::AprilTagExtended_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::duckietown_msgs::AprilTagExtended_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"geometry_msgs/Transform transform\n"
"int32 tag_id\n"
"string tag_family\n"
"int32 hamming\n"
"float32 decision_margin\n"
"float32[9] homography\n"
"float32[2] center\n"
"float32[8] corners\n"
"float32 pose_error\n"
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
"MSG: geometry_msgs/Transform\n"
"# This represents the transform between two coordinate frames in free space.\n"
"\n"
"Vector3 translation\n"
"Quaternion rotation\n"
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
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::duckietown_msgs::AprilTagExtended_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::duckietown_msgs::AprilTagExtended_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.transform);
      stream.next(m.tag_id);
      stream.next(m.tag_family);
      stream.next(m.hamming);
      stream.next(m.decision_margin);
      stream.next(m.homography);
      stream.next(m.center);
      stream.next(m.corners);
      stream.next(m.pose_error);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AprilTagExtended_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::duckietown_msgs::AprilTagExtended_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::duckietown_msgs::AprilTagExtended_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "transform: ";
    s << std::endl;
    Printer< ::geometry_msgs::Transform_<ContainerAllocator> >::stream(s, indent + "  ", v.transform);
    s << indent << "tag_id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.tag_id);
    s << indent << "tag_family: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.tag_family);
    s << indent << "hamming: ";
    Printer<int32_t>::stream(s, indent + "  ", v.hamming);
    s << indent << "decision_margin: ";
    Printer<float>::stream(s, indent + "  ", v.decision_margin);
    s << indent << "homography[]" << std::endl;
    for (size_t i = 0; i < v.homography.size(); ++i)
    {
      s << indent << "  homography[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.homography[i]);
    }
    s << indent << "center[]" << std::endl;
    for (size_t i = 0; i < v.center.size(); ++i)
    {
      s << indent << "  center[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.center[i]);
    }
    s << indent << "corners[]" << std::endl;
    for (size_t i = 0; i < v.corners.size(); ++i)
    {
      s << indent << "  corners[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.corners[i]);
    }
    s << indent << "pose_error: ";
    Printer<float>::stream(s, indent + "  ", v.pose_error);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DUCKIETOWN_MSGS_MESSAGE_APRILTAGEXTENDED_H
