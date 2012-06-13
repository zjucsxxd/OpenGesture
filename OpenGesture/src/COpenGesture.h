/*
 * COpenGesture.h
 *
 *  Created on: Jun 13, 2012
 *      Author: HALOBYDI
 */
#include "GestureDataTypes.h"

#ifndef COPENGESTURE_H_
#define COPENGESTURE_H_
// A structure that contain the Joint cord in 3d space
class COpenGesture {
public:
	COpenGesture();
	virtual ~COpenGesture();
private:// internal buffers
	double yBuffer[];
	double yBuffer[];
	double zBuffer[];

private:// the Gesture file that conatin the pattens
	char* templateFileName;

public:// Flags
	bool IsGesture;

public:// public methods
	void LoadGesture(char* fn);
protected:
	static void Normalise(JointStruct* joint,double max,double min);
public: // Gesture Recognition
	bool RecogniseGesture(double dataPoint);
};

#endif /* COPENGESTURE_H_ */
