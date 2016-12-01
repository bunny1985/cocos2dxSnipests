/*
 * HarveyAnimation.cpp
 *
 *  Created on: 01.12.2016
 *      Author: michal
 */

#include "HarveyAnimation.h"

HarveyAnimation::HarveyAnimation() : Animate(){


	// TODO Auto-generated constructor stub

}

HarveyAnimation::~HarveyAnimation() {
	// TODO Auto-generated destructor stub
}

HarveyAnimation* HarveyAnimation::create(float duration) {
	int frames = 3;
	float frameDuration = 0.1;
	Vector<SpriteFrame*> animFrames(frames);
	char str[100] = {0};
	for(int i = 1; i <= frames; i++)
	{
	    sprintf(str, "Harvey/soldier%i.png",i);
	    auto frame = SpriteFrame::create(str,Rect(0,0,50,80)); //we assume that the sprites' dimentions are 40*40 rectangles.
	    animFrames.pushBack(frame);
	}

	int repeats = duration / (frameDuration*frames) ;
	auto animation = Animation::createWithSpriteFrames(animFrames, frameDuration, repeats );
	auto animate = HarveyAnimation::create(animation);
	return animate;
}

HarveyAnimation* HarveyAnimation::create(Animation* animation) {

		HarveyAnimation *animate = new (std::nothrow) HarveyAnimation();
	    if (animate && animate->initWithAnimation(animation))
	    {
	        animate->autorelease();
	        return animate;
	    }

	    delete animate;
	    return nullptr;

}
