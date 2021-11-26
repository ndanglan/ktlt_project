#pragma once
#include <iostream>
#include <string.h>
#include "TimeClass.h"
#include <map>
#include <vector>
#include <string>
using namespace std;

class Parent
{
private:
    string getStaticString();
    void printErrors();

protected:
    string inputFile;
    string outputFile;
    string staticString;
    string nameLogFile;
    TimeClass time;
    map<string, string> hashFunction;
    int numWords;
    int numConvertedWords;
    int numCharacters;
    int numConvertedCharacters;
    vector<string> errorsMessages;

public:
    Parent(string, string);
    map<string, string> getHashFunction(string, string);
    string transform(string);
    virtual string transformOneLine(string, int);
    void printStatics();
    string basename(string);
    string pureName(string);
    void run();
    virtual void addErrorMessage();
    void printErrors();
    Parent(string, string);
    void printStatics();
    void run();
    map<string, string> getHashFunction(string, string);
    string transform(string);
    virtual string transformOneLine(string, int);
    string basename(string);
    string pureName(string);
    virtual void addErrorMessage();
};
