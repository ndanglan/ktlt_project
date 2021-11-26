#pragma once
#include <iostream>
#include <string.h>
#include "TimeClass.h"
#include <map>
#include <string>
using namespace std;

class Parent
{
private:

    string getStaticString();

protected:
    string inputFiles;
    string outputFiles;
    string staticString;
    TimeClass time;
    map<string, string> hashFunction;
    int numWords;
    int numConvertedWords;
    int numCharacters;
    int numConvertedCharacters;

public:
    Parent(string, string);
    map<string, string> getHashFunction(string, string);
    string transform(string);
    virtual string transformOneLine(string, int);
    void printStatics();
    string basename(string);
    void run();
};
