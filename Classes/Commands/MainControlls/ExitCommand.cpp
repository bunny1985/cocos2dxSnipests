#include "ExitCommand.h"
#include "cocos2d.h"
USING_NS_CC;

ExitCommand::ExitCommand() :Command()
{

}

ExitCommand::~ExitCommand()
{
}
void ExitCommand::execute(){
        //Close the cocos2d-x game scene and quit the application
    Director::getInstance()->end();

    #if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
    
    /*To navigate back to native iOS screen(if present) without quitting the application  ,do not use Director::getInstance()->end() and exit(0) as given above,instead trigger a custom event created in RootViewController.mm as below*/
    
    //EventCustom customEndEvent("game_scene_close_event");
    //_eventDispatcher->dispatchEvent(&customEndEvent);
}