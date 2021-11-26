#pragma once
#include "Parent.h"
#include <iostream>
#include <string.h>
#include <map>

class Encoder : public Parent
{
public:
    Encoder(string, string);
    string transformOneWord(string, int);
    string transformOneLine(string, int);
};
