/*
 * CommonFunctions.cpp
 *
 *  Created on: 30.11.2016
 *      Author: michal
 */

#include "CommonFunctions.h"

CommonFunctions::CommonFunctions() {
	// TODO Auto-generated constructor stub

}

CommonFunctions::~CommonFunctions() {
	// TODO Auto-generated destructor stub
}

double CommonFunctions::GetAngleToRotateBetweenTwoPoints(Vec2 objectPosition,
		Vec2 PointToFaceTo) {
		auto myPosition = Director::getInstance()->convertToGL(objectPosition);
		auto pointToRotate = Director::getInstance()->convertToGL(PointToFaceTo);
		double angle = atan2 (myPosition.y-pointToRotate.y , myPosition.x-pointToRotate.x) * (180 / M_PI);
		return angle;
}

void CommonFunctions::centerViewOnPoint(Vec2 position) {
	 auto winSize = Director::getInstance()->getWinSize();

	    int x = MAX(position.x, winSize.width/2);
	    int y = MAX(position.y, winSize.height/2);
	    //x = MIN(x, (_tileMap->getMapSize().width * this->_tileMap->getTileSize().width) - winSize.width / 2);
	    //y = MIN(y, (_tileMap->getMapSize().height * _tileMap->getTileSize().height) - winSize.height/2);
	      //actualPosition = ccp(x, y);

	    //Point centerOfView = ccp(winSize.width/2, winSize.height/2);
	    //CCPoint viewPoint = ccpSub(centerOfView, actualPosition);
	    //this->setPosition(viewPoint);
}
