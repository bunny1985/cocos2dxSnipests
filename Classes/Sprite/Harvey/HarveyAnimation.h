/*
 * HarveyAnimation.h
 *
 *  Created on: 01.12.2016
 *      Author: michal
 */

#ifndef CLASSES_SPRITE_HARVEY_HARVEYANIMATION_H_
#define CLASSES_SPRITE_HARVEY_HARVEYANIMATION_H_


#include "cocos2d.h"


USING_NS_CC;


class HarveyAnimation : public Animate{
public:
	HarveyAnimation();
	virtual ~HarveyAnimation();
	static HarveyAnimation* create(float duration );
	static HarveyAnimation* create(Animation*);

};

#endif /* CLASSES_SPRITE_HARVEY_HARVEYANIMATION_H_ */
