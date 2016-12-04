/*
 * Harvey.h
 *
 *  Created on: 30.11.2016
 *      Author: michal
 */

#ifndef CLASSES_SPRITE_HARVEY_H_
#define CLASSES_SPRITE_HARVEY_H_

#include "cocos2d.h"
#include "../Common/CommonFunctions.h"
#include "./Wepons/Gun.h"
USING_NS_CC;

class Harvey : public Sprite{
public:
	Harvey();
	virtual ~Harvey();
	static Harvey* create();
protected:
	virtual void update(float delta);
	Gun* gun;
private:
	void addEvents();


	EventDispatcher* _eventDispatcher;
	EventListenerMouse* _mouseListener;
    void onMouseDown(Event* event);
    void onMouseUp(Event* event);
    void onMouseMove(Event* event);
    void onMouseScroll(Event* event);


    float speed;
    Action* movingAction;

    void goToPoint(Vec2 destination);
    void shotToPoint(Vec2 destination);


};

#endif /* CLASSES_SPRITE_HARVEY_H_ */
