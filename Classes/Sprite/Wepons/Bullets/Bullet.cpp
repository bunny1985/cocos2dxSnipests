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

		Vec2 moveVector = (destination - startPosition) ;
		moveVector.normalize();


		node->runAction(Sequence::create(DelayTime::create(2.5),RemoveSelf::create(false) , nullptr));

		auto physicsBody = PhysicsBody::createBox(node->getContentSize(), PhysicsMaterial(0.1f, 1.0f, 0.0f));
				physicsBody->setDynamic(true);
				node->setPhysicsBody(physicsBody);

				physicsBody->setVelocity(moveVector* speed);



		return node;
	}
	CC_SAFE_DELETE(node);
}
