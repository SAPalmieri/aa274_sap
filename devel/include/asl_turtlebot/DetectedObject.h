// Generated by gencpp from file asl_turtlebot/DetectedObject.msg
// DO NOT EDIT!


#ifndef ASL_TURTLEBOT_MESSAGE_DETECTEDOBJECT_H
#define ASL_TURTLEBOT_MESSAGE_DETECTEDOBJECT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace asl_turtlebot
{
template <class ContainerAllocator>
struct DetectedObject_
{
  typedef DetectedObject_<ContainerAllocator> Type;

  DetectedObject_()
    : id(0)
    , name()
    , confidence(0.0)
    , distance(0.0)
    , thetaleft(0.0)
    , thetaright(0.0)
    , corners()  {
    }
  DetectedObject_(const ContainerAllocator& _alloc)
    : id(0)
    , name(_alloc)
    , confidence(0.0)
    , distance(0.0)
    , thetaleft(0.0)
    , thetaright(0.0)
    , corners(_alloc)  {
  (void)_alloc;
    }



   typedef uint32_t _id_type;
  _id_type id;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef double _confidence_type;
  _confidence_type confidence;

   typedef double _distance_type;
  _distance_type distance;

   typedef double _thetaleft_type;
  _thetaleft_type thetaleft;

   typedef double _thetaright_type;
  _thetaright_type thetaright;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _corners_type;
  _corners_type corners;





  typedef boost::shared_ptr< ::asl_turtlebot::DetectedObject_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::asl_turtlebot::DetectedObject_<ContainerAllocator> const> ConstPtr;

}; // struct DetectedObject_

typedef ::asl_turtlebot::DetectedObject_<std::allocator<void> > DetectedObject;

typedef boost::shared_ptr< ::asl_turtlebot::DetectedObject > DetectedObjectPtr;
typedef boost::shared_ptr< ::asl_turtlebot::DetectedObject const> DetectedObjectConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::asl_turtlebot::DetectedObject_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::asl_turtlebot::DetectedObject_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace asl_turtlebot

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'asl_turtlebot': ['/home/aa274/catkin_ws/src/asl_turtlebot/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::asl_turtlebot::DetectedObject_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::asl_turtlebot::DetectedObject_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::asl_turtlebot::DetectedObject_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::asl_turtlebot::DetectedObject_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::asl_turtlebot::DetectedObject_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::asl_turtlebot::DetectedObject_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::asl_turtlebot::DetectedObject_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2650e98dd260a5b8590eced757507d05";
  }

  static const char* value(const ::asl_turtlebot::DetectedObject_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2650e98dd260a5b8ULL;
  static const uint64_t static_value2 = 0x590eced757507d05ULL;
};

template<class ContainerAllocator>
struct DataType< ::asl_turtlebot::DetectedObject_<ContainerAllocator> >
{
  static const char* value()
  {
    return "asl_turtlebot/DetectedObject";
  }

  static const char* value(const ::asl_turtlebot::DetectedObject_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::asl_turtlebot::DetectedObject_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 id\n\
string name\n\
float64 confidence\n\
float64 distance\n\
float64 thetaleft\n\
float64 thetaright\n\
float64[] corners\n\
";
  }

  static const char* value(const ::asl_turtlebot::DetectedObject_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::asl_turtlebot::DetectedObject_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.name);
      stream.next(m.confidence);
      stream.next(m.distance);
      stream.next(m.thetaleft);
      stream.next(m.thetaright);
      stream.next(m.corners);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DetectedObject_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::asl_turtlebot::DetectedObject_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::asl_turtlebot::DetectedObject_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.id);
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "confidence: ";
    Printer<double>::stream(s, indent + "  ", v.confidence);
    s << indent << "distance: ";
    Printer<double>::stream(s, indent + "  ", v.distance);
    s << indent << "thetaleft: ";
    Printer<double>::stream(s, indent + "  ", v.thetaleft);
    s << indent << "thetaright: ";
    Printer<double>::stream(s, indent + "  ", v.thetaright);
    s << indent << "corners[]" << std::endl;
    for (size_t i = 0; i < v.corners.size(); ++i)
    {
      s << indent << "  corners[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.corners[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ASL_TURTLEBOT_MESSAGE_DETECTEDOBJECT_H
