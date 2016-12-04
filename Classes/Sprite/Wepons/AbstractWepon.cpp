/*
 * AbstractWepon.cpp
 *
 *  Created on: 01.12.2016
 *      Author: michal
 */

#include "AbstractWepon.h"
#include "./Bullets/Bullet.h"
#include "audio/include/SimpleAudioEngine.h"
AbstractWepon::AbstractWepon() {
	this->bulletsInMagazine =100;
	this->dispersion= 0.1;
	this->pauseBetweenShots = 0.25;
	this->realoadTime = 2.0;
}





AbstractWepon::~AbstractWepon() {
	// TODO Auto-generated destructor stub
}

void AbstractWepon::shoot() {
	auto audio = CocosDenshion::SimpleAudioEngine::getInstance();
		audio->playEffect("shots/pistol.wav");
		Bullet::create(2000.0 , this->viewfinderPosition , this->getParent()->getPosition());
}

void AbstractWepon::stopShooting() {
	this->unscheduleAllSelectors();
}

void AbstractWepon::startShooting() {
	this->schedule(schedule_selector(AbstractWepon::shootCallback) , this->pauseBetweenShots);



}

void AbstractWepon::shootCallback(float delta) {
	this->shoot();
}

void AbstractWepon::reload() {
}
