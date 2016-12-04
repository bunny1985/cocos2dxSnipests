/*
 * Bullet.h
 *
 *  Created on: 04.12.2016
 *      Author: michal
 */


#ifndef CLASSES_SPRITE_WEPONS_BULLETS_BULLET_H_
#define CLASSES_SPRITE_WEPONS_BULLETS_BULLET_H_
#include "./AbstractBullet.h"

class Bullet : public AbstractBullet{
public:
	Bullet();
	virtual ~Bullet();
	static Bullet* create(float speed , Vec2 destination, Vec2 startPosition);

protected:


};

#endif /* CLASSES_SPRITE_WEPONS_BULLETS_BULLET_H_ */
