#include "GamePlayDirector.h"


GamePlayDirector* GamePlayDirector::GetInstance(){
    static GamePlayDirector*instance  = new    GamePlayDirector();
    return     instance;
}
GamePlayDirector::GamePlayDirector(){
    
}
GamePlayDirector::~GamePlayDirector(){
    
}

