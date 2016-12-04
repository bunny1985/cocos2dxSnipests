/*
 * Bullet.cpp
 *
 *  Created on: 04.12.2016
 *      Author: michal
 */

#include "Bullet.h"
#include "../../../HelloWorldScene.h"

Bullet::Bullet() : AbstractBullet(){
	// TODO Auto-generated constructor stub

}

Bullet::~Bullet() {
	// TODO Auto-generated destructor stub
}

Bullet* Bullet::create(float speed, Vec2 destination , Vec2 startPosition) {
	auto node = new Bullet();
	node->_eventDispatcher = Director::getInstance()->getEventDispatcher();
	if (node->initWithFile("bullet.png")) {
		node->speed = speed;
		HelloWorld::getInstance()->addChild(node);
		float distance = destination.distance(startPosition);
		float duration = distance/speed;
		node->setPosition(startPosition);
		node->runAction(Sequence::createWithTwoActions(MoveTo::create(duration , destination), RemoveSelf::create(false)));
		return node;
	}
	CC_SAFE_DELETE(node);
}
