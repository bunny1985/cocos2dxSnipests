/*
 * AbstractBullet.h
 *
 *  Created on: 01.12.2016
 *      Author: michal
 */

#ifndef CLASSES_SPRITE_WEPONS_BULLETS_ABSTRACTBULLET_H_
#define CLASSES_SPRITE_WEPONS_BULLETS_ABSTRACTBULLET_H_
#include "cocos2d.h"
USING_NS_CC;


class AbstractBullet : public Sprite{
public:
	AbstractBullet();
	virtual ~AbstractBullet();
protected:
	int maxRange;
	int speed;
};

#endif /* CLASSES_SPRITE_WEPONS_BULLETS_ABSTRACTBULLET_H_ */
