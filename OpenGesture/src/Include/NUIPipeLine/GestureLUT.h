/*
 * GestureLUT.h
 *
 *  Created on: Jun 13, 2012
 *      Author: HALOBYDI
 *      This class will recognise the gesture by loading a gesture bin file
 *      the bin file is a comaseperated file thta have the motion vetor to compair;
 */
#include "CGestureDetector.h"

#ifndef GESTURELUT_H_
#define GESTURELUT_H_

class GestureLUT : CGestureDetector {
public:
	GestureLUT();
	virtual ~GestureLUT();
private:// local buffers
	float buffer[];
private:
	void shift(float data);

};

#endif /* GESTURELUT_H_ */
