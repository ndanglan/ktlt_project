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

<<<<<<< HEAD
public:
    Parent(string, string);
    void printStatics();
    void run();
=======
>>>>>>> bd42383bcc9e7858ace7792da2e525f33eed1b8c
    map<string, string> getHashFunction(string, string);
    string transform(string);
    virtual string transformOneLine(string, int);
    string basename(string);
    string pureName(string);
    virtual void addErrorMessage();
<<<<<<< HEAD
=======

public:
    Parent(string, string);
    void printStatics();
    void run();
>>>>>>> bd42383bcc9e7858ace7792da2e525f33eed1b8c
};
