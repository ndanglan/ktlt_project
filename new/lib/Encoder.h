#pragma once
#include "Parent.h"
#include <iostream>
#include <string.h>
#include <map>

class Encoder : public Parent
{
public:
    Encoder(string, string);
    string transform(string);
    void run();
};
