#pragma once
#include "../../Abstracts/Command.h"

class ExitCommand : public Command
{
    public:
        ExitCommand();
        ~ExitCommand();
        virtual void execute();
    private:
        
};

