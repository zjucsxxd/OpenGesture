/*
 * COpenGesture.h
 *
 *  Created on: Jun 13, 2012
 *      Author: HALOBYDI
 *
 *
 *      This is the main class to investigate a Gesture
 */
#include <GestureDataTypes.h>

#include <CGbinFile.h>

#ifndef COPENGESTURE_H_
#define COPENGESTURE_H_
// A structure that contain the Joint cord in 3d space
class COpenGesture {
public:
	COpenGesture();
	virtual ~COpenGesture();
private:// internal buffers


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
    double ShiftTimeFrame(double data);
    double Filter(double data);
};

#endif /* COPENGESTURE_H_ */
