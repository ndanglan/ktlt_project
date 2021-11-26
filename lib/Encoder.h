#pragma once
#include "Parent.h"
#include <iostream>
#include <string.h>
#include <map>

class Encoder : public Parent
{
    protected:
        string transformOneWord(string, int);
        string transformOneLine(string, int);
        void addErrorMessage(char, int);

    public:
        Encoder(string, string);
};
