
/*
 *
 * Define the basic data types for the system
 *
 * Auther: HALOBYDI
 *
 *
 *
 * Contain All OpenGesture Data Type
 *
 */

// A joint structure that holds a single joint cod in space relative to the
// Nui device
#ifndef GESTUREDATATYPE_H_
#define GESTUREDATATYPE_H_
typedef struct JointStruct
{
	char* JointName;
	double x;
	double y;
	double z;
} JOINT_STRUCT;
typedef struct GestureInfoStructure
{
	char* GestureName;
	JOINT_STRUCT buffer[];

} GESTURE_INFO;
typedef struct SkeletonJoints
{
	JOINT_STRUCT Head,LeftHand,RightHand,LeftElbo,RightElbo,CenterChest;
	JOINT_STRUCT Amberical;
	JOINT_STRUCT RightHip,LeftHip,RightKnee,LeftKnee,RightAnkle,LeftAnkle;


} SKELETON_JOINTS;
enum PORT_TYPE
{
	SINK,
	SOURCE,
	FILTER
};

#endif
