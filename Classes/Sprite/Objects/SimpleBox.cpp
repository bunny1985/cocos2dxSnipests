/*
 * SimpleBox.cpp
 *
 *  Created on: 09.12.2016
 *      Author: michal
 */

#include "SimpleBox.h"

SimpleBox::SimpleBox() {
	// TODO Auto-generated constructor stub

}

SimpleBox::~SimpleBox() {
	// TODO Auto-generated destructor stub
}

SimpleBox* SimpleBox::create() {
	auto node = new SimpleBox();

	if (node->initWithFile("box.png")) {
		auto physicsBody = PhysicsBody::createBox(node->getContentSize(), PhysicsMaterial(0.1f,0.3f, 0.0f));
		physicsBody->setDynamic(true);
		node->setPhysicsBody(physicsBody);
		physicsBody->setLinearDamping(0.9);
		physicsBody->setAngularDamping(0.9);
		return node;
	}
	CC_SAFE_DELETE(node);
}
