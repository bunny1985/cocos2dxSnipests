#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"
//#include "Box2D/Box2D.h"

class HelloWorld : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();
    CREATE_FUNC(HelloWorld);
    static HelloWorld* getInstance();
    void initPhisics();
    static HelloWorld* instance;
private:

//    b2World* world;

};

#endif // __HELLOWORLD_SCENE_H__
