#pragma once
#include "Parent.h"
#include <iostream>
#include <string.h>
#include <map>

class Decoder : public Parent
{
    protected:
        string transformOneCharacter(string, int);
        string transformOneWord(string, int);
        string transformOneLine(string, int);
        void addErrorMessage(string, int);

    public:
        Decoder(string, string);
};
