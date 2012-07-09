/*
 * CGestureDetector.h
 *
 *  Created on: Jul 9, 2012
 *      Author: HALOBYDI
 *
 *      This Class Is The BAse clas That all The Gesture Dtection Engines Are drived From
 */
#include <GestureDataTypes.h>
#ifndef CGESTUREDETECTOR_H_
#define CGESTUREDETECTOR_H_

class CGestureDetector {
public:
	CGestureDetector();
	virtual ~CGestureDetector();

public:// parameters
	float ThresholdValue;                      // The Threshold value
	char* BinFilename;
public:// Methods
	int LoadBinFile(char* filepath);
	bool isaGesture(float data);
};

#endif /* CGESTUREDETECTOR_H_ */
