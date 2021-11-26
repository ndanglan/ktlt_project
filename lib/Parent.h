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
    int numWords;
    int numConvertedWords;
    int numCharacters;
    int numConvertedCharacters;

    string getStaticString();

protected:
    string inputFiles;
    string outputFiles;
    string staticString;
    TimeClass time;
    map<string, string> hashFunction;

public:
    Parent(string, string);
    map<string, string> getHashFunction(string, string);
    string transform(string);
    virtual string transformOneLine(string);
    void printStatics();
    void run();
};
