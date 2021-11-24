#include "Parent.h"
#include <iostream>
#include <string.h>
#include <map>


class Encoder: public Parent{
    public:
        Encoder(string, string);
        map<string, string> getHashFunction(string, string);
        string transform();
};
