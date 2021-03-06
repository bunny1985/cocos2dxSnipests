/*
 * Harvey.cpp
 *
 *  Created on: 30.11.2016
 *      Author: michal
 */

#include "Harvey.h"
#include <math.h>
#include "audio/include/SimpleAudioEngine.h"
#include "Harvey/HarveyAnimation.h"
#define MOUSEBUTTON_RIGHT  1
#define MOUSEBUTTON_LEFT  0
Harvey::Harvey() {

	//setSpriteFrame("test.png");

}

Harvey::~Harvey() {

	_eventDispatcher->removeEventListener(_mouseListener);
}

Harvey* Harvey::create() {
	auto node = new Harvey();
	node->_eventDispatcher = Director::getInstance()->getEventDispatcher();
	if(node->initWithFile("Harvey/soldier1.png")){





		node->addEvents();
		node->speed = 300;
		node->movingAction = nullptr;
		node->schedule(schedule_selector(Harvey::update), 0.01);

		auto physicsBody = PhysicsBody::createBox(node->getContentSize(), PhysicsMaterial(0.1f,1.0f, 20.0f));
		physicsBody->setDynamic(true);
		physicsBody->setLinearDamping(0.5);

		physicsBody->setLinearDamping(0.9);
		physicsBody->setAngularDamping(0.9);
		node->setPhysicsBody(physicsBody);
		auto gun = Gun::create();
		node->addChild(gun);
		node->gun = gun;






		return node;
	}


	CC_SAFE_DELETE(node);

}

void Harvey::addEvents() {

	   	_mouseListener = EventListenerMouse::create();
	    _mouseListener->onMouseMove = CC_CALLBACK_1(Harvey::onMouseMove, this);
	    _mouseListener->onMouseUp = CC_CALLBACK_1(Harvey::onMouseUp, this);
	    _mouseListener->onMouseDown = CC_CALLBACK_1(Harvey::onMouseDown, this);
	    _mouseListener->onMouseScroll = CC_CALLBACK_1(Harvey::onMouseScroll, this);

	    _eventDispatcher->addEventListenerWithSceneGraphPriority(_mouseListener, this);
}

void Harvey::onMouseDown(Event* event) {
	EventMouse* e = (EventMouse*)event;
	auto size = Director::getInstance()->getVisibleSize();
	Vec2  vectorToMove = Vec2(size/2 , e->getLocationInView());
	if(e->getMouseButton()==MOUSEBUTTON_RIGHT){

		this->goToPoint(this->getPosition() + vectorToMove);
	}else if( e->getMouseButton()==MOUSEBUTTON_LEFT){
		this->shotToPoint(this->getPosition() + vectorToMove);
	}



}



void Harvey::onMouseUp(Event* event) {
	EventMouse* e = (EventMouse*)event;
	if( e->getMouseButton()==MOUSEBUTTON_LEFT){
		this->gun->stopShooting();
	}
}

void Harvey::onMouseMove(Event* event) {
	EventMouse* e = (EventMouse*)event;
	auto size = Director::getInstance()->getVisibleSize();
	Vec2  vectorTopointer = Vec2(size/2 , e->getLocationInView());

	this->gun->viewfinderPosition = this->getPosition() + vectorTopointer;
	double angle = CommonFunctions::GetAngleToRotateBetweenTwoPoints(Vec2(size.width/2 , size.height/2) , e->getLocationInView());
	this->setRotation(angle);

}

void Harvey::onMouseScroll(Event* event) {
}

void Harvey::goToPoint(Vec2 destination) {

	CCPoint start = this->getPosition();
	float distance = ccpDistance(start, destination);
	float duration = distance/speed;
	if(this->movingAction!=nullptr){
		this->stopAction(this->movingAction);
	}
	this->movingAction = Spawn::createWithTwoActions(MoveTo::create(duration, destination), HarveyAnimation::create(duration));
	this->runAction(movingAction);
}

void Harvey::update(float delta) {


	auto cam  = Camera::getDefaultCamera();

	cam->setPosition(this->getPosition());
}

void Harvey::shotToPoint(Vec2 destination) {
	this->gun->startShooting();
}
