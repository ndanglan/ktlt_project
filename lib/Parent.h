#pragma once
#include<iostream>
#include<string.h>
#include "TimeClass.h"
#include<map>
#include <string>
using namespace std;

class Parent{
    private:
        string inputFiles;
        string outputFiles;
        int numWords; 
        int numConvertedWords;
        int numCharacters;
        int numConvertedCharacters;

        string getStaticString();
    protected:
        TimeClass time;
        map<string, string> hashFunction;

    public:
        Parent(string, string);
        map<string, string> getHashFunction(string, string);
        virtual string transform();
        void printStatics();
        void save();
};
