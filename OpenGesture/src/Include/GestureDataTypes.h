/*
 *
 * Define the basic data types for the system
 *
 * Auther: HALOBYDI
 *
 *
 *
 *
 *
 */

// A joint structure that holds a single joint cod in space relative to the
// Nui device
typedef struct JointStruct
{
	double x;
	double y;
	double z;
} JOINT_STRUCT;
typedef struct GestureInfoStructure
{
	char* GestureName;
	double buffer;

} GESTURE_INFO;
