/*
 * Gun.h
 *
 *  Created on: 04.12.2016
 *      Author: michal
 */

#ifndef CLASSES_SPRITE_WEPONS_GUN_H_
#define CLASSES_SPRITE_WEPONS_GUN_H_
#include "cocos2d.h"
#include "./AbstractWepon.h"
USING_NS_CC;

class Gun :public AbstractWepon  {
public:
	Gun();
	virtual ~Gun();
	static Gun* create();

};

#endif /* CLASSES_SPRITE_WEPONS_GUN_H_ */
