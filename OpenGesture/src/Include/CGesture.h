/*
 * CGesture.h
 *
 *  Created on: Jul 9, 2012
 *      Author: HALOBYDI
 */

#ifndef CGESTURE_H_
#define CGESTURE_H_
#include "GestureDataTypes.h"
class CGesture {
public:
	CGesture();
	virtual ~CGesture();
public:
	GESTURE_INFO* info;
	char* Gesture_file_name;
public:
	bool IsGesture();// Trigger the Gesture Recognition Cycle


private:


};

#endif /* CGESTURE_H_ */
