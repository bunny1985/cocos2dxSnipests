/*
 * SimpleBox.h
 *
 *  Created on: 09.12.2016
 *      Author: michal
 */

#ifndef CLASSES_SPRITE_OBJECTS_SIMPLEBOX_H_
#define CLASSES_SPRITE_OBJECTS_SIMPLEBOX_H_

#include "cocos2d.h"
USING_NS_CC;


class SimpleBox : public Sprite{
public:
	SimpleBox();
	virtual ~SimpleBox();
	static SimpleBox* create();
};

#endif /* CLASSES_SPRITE_OBJECTS_SIMPLEBOX_H_ */
