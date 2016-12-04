/*
 * AbstractWepon.h
 *
 *  Created on: 01.12.2016
 *      Author: michal
 */

#ifndef CLASSES_SPRITE_WEPONS_ABSTRACTWEPON_H_
#define CLASSES_SPRITE_WEPONS_ABSTRACTWEPON_H_
#include "cocos2d.h"

USING_NS_CC;

class AbstractWepon : public Sprite{
public:
	AbstractWepon();
	virtual ~AbstractWepon();
public:
	float dispersion;
	float pauseBetweenShots;
	float realoadTime;
	int bulletsInMagazine;

	void virtual shoot();
	void shootCallback(float delta );
	void stopShooting();
	void startShooting();
	void reload();
	Vec2 viewfinderPosition;
};

#endif /* CLASSES_SPRITE_WEPONS_ABSTRACTWEPON_H_ */
