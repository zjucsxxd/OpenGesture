/*
 * COpenGesture.cpp
 *
 *  Created on: Jun 13, 2012
 *      Author: HALOBYDI
 */

#include "COpenGesture.h"

COpenGesture::COpenGesture() {
	// TODO Auto-generated constructor stub

}

COpenGesture::~COpenGesture() {
	// TODO Auto-generated destructor stub
}

void COpenGesture::LoadGesture(char* fn) {
}

static void COpenGesture::Normalise(JointStruct* joint, double max, double min) {
}

bool COpenGesture::RecogniseGesture(double dataPoint) {

	return false;
}

double COpenGesture::ShiftTimeFrame(double data) {
}

double COpenGesture::Filter(double data) {
}




class CGesture {
public:
	CGesture();
	virtual ~CGesture();
public:
	GESTURE_INFO* info;
	char* Gesture_file_name;
	
};

