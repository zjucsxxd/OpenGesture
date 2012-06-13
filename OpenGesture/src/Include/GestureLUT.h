/*
 * GestureLUT.h
 *
 *  Created on: Jun 13, 2012
 *      Author: HALOBYDI
 *      This class will recognise the gesture by loading a gesture bin file
 *      the bin file is a comaseperated file thta have the motion vetor to compair;
 */

#ifndef GESTURELUT_H_
#define GESTURELUT_H_

class GestureLUT {
public:
	GestureLUT();
	virtual ~GestureLUT();
private:// local buffers
	float buffer[];
private:
	void shift(float data);
public:// parameters
	float ThresholdValue;                      // The Threshold value
	char* BinFilename;
public:// Methods
	int LoadBinFile(char* filepath);
	bool isaGesture(float data);
};

#endif /* GESTURELUT_H_ */
