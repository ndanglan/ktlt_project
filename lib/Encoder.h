#pragma once
#include "Parent.h"
#include <iostream>
#include <string.h>
#include <map>


class Encoder: public Parent{
    private:
        map<string, string> hashFunction;

    public:
        Encoder(string, string);
        map<string, string> getHashFunction(string, string);
        string transform(string);
};
