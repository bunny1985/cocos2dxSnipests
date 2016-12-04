/*
 * Gun.cpp
 *
 *  Created on: 04.12.2016
 *      Author: michal
 */

#include "Gun.h"

Gun::Gun() :
		AbstractWepon() {

}

Gun::~Gun() {
	// TODO Auto-generated destructor stub
}

Gun* Gun::create() {
	auto node = new Gun();
	node->_eventDispatcher = Director::getInstance()->getEventDispatcher();
	if (node->initWithFile("ball.png")) {
		return node;
	}
	CC_SAFE_DELETE(node);
}
