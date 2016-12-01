#include "HelloWorldScene.h"
#include "SimpleAudioEngine.h"
#include "Sprite/Harvey.h"

#include "Commands/MainControlls/ExitCommand.h"
USING_NS_CC;

Scene* HelloWorld::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = HelloWorld::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    auto visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    /////////////////////////////
    // 2. add a menu item with "X" image, which is clicked to quit the program
    //    you may modify it.

    // add a "close" icon to exit the progress. it's an autorelease object



    MenuItemImage* closeItem =   MenuItemImage::create(
                                           "CloseNormal.png",
                                           "CloseSelected.png",
                                           CC_CALLBACK_1(HelloWorld::menuCloseCallback, this));
    
    closeItem->setPosition(Vec2(origin.x + visibleSize.width - closeItem->getContentSize().width/2 ,
                                origin.y + closeItem->getContentSize().height/2));


    auto menu = Menu::create(closeItem, NULL);
    menu->setPosition(Vec2::ZERO);
    this->addChild(menu, 1);

    /////////////////////////////
    // 3. add your codes below...

    // add a label shows "Hello World"
    // create and initialize a label
    
    auto label = Label::createWithTTF("Hello World", "fonts/Marker Felt.ttf", 24);
    auto bg = Sprite::create("ground_dry2_d.jpg");
    bg->setPosition(visibleSize.width/2 , visibleSize.height/2);
    bg->setTextureRect(Rect(0 , 0 , 10000 , 10000));
    Texture2D::TexParams params = {GL_LINEAR,GL_LINEAR,GL_REPEAT,GL_REPEAT};
    bg->getTexture()->setTexParameters(params);
    //bg->getTexture()->setTexParameters((TexParams){ gl.LINEAR, gl.LINEAR, gl.REPEAT, gl.REPEAT});
    this->addChild(bg);
    
    // position the label on the center of the screen
    label->setPosition(Vec2(origin.x + visibleSize.width/2,
                            origin.y + visibleSize.height - label->getContentSize().height));

    // add the label as a child to this layer
    this->addChild(label, 1);

    // add "HelloWorld" splash screen"
    auto sprite = Harvey::create();

    // position the sprite on the center of the screen
    sprite->setPosition(Vec2(visibleSize.width/2 + origin.x, visibleSize.height/2 + origin.y));

    // add the sprite as a child to this layer
    this->addChild(sprite, 0);
     _mouseListener = EventListenerMouse::create();
    _mouseListener->onMouseDown = CC_CALLBACK_1(HelloWorld::onMouseDown, this);
    Director::getInstance()->getEventDispatcher()->addEventListenerWithSceneGraphPriority(_mouseListener, this);
    return true;
}


void HelloWorld::menuCloseCallback(Ref* pSender)
{
    ExitCommand().execute();

}

void HelloWorld::onMouseDown(cocos2d::Event* event) {
	EventMouse* e = (EventMouse*)event;
	auto size = Director::getInstance()->getVisibleSize();
	Vec2  destination = Vec2(size/2 , e->getLocationInView());

	CCLOG("Adding sprite");

	 auto sprite = Sprite::create("ball.png");
	    // position the sprite on the center of the screen
	 sprite->setPosition(e->getLocationInView());

	    // add the sprite as a child to this layer
	 this->addChild(sprite);

}
