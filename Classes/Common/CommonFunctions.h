/*
 * CommonFunctions.h
 *
 *  Created on: 30.11.2016
 *      Author: michal
 */

#ifndef CLASSES_COMMON_COMMONFUNCTIONS_H_
#define CLASSES_COMMON_COMMONFUNCTIONS_H_
#include "cocos2d.h"

USING_NS_CC;

class CommonFunctions {
public:
	CommonFunctions();
	virtual ~CommonFunctions();
	/**
	 * Calculates Angle to rotate between two objects
	 * objectPosition - object to rotate
	 */
	static double GetAngleToRotateBetweenTwoPoints(Vec2 objectPosition , Vec2 PointToFaceTo );
	static void centerViewOnPoint(Vec2 position);
};

#endif /* CLASSES_COMMON_COMMONFUNCTIONS_H_ */
