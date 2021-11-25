#pragma once
#include "Parent.h"
#include <iostream>
#include <string.h>
#include <map>


class Decoder: public Parent{
    public:
        Decoder(string, string);
        string transform(string);
};
