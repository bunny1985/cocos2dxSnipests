#pragma once

class GamePlayDirector {

    public:
    static GamePlayDirector* GetInstance();
    ~GamePlayDirector();
    private:
        
        GamePlayDirector();
};