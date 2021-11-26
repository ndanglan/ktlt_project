#pragma once
#include "Parent.h"
#include <iostream>
#include <string.h>
#include <map>

class Decoder : public Parent
{
public:
    Decoder(string, string);
    string transformOneCharacter(string, int);
    string transformOneWord(string, int);
    string transformOneLine(string, int);
    void addErrorMessage(string, int);
};
