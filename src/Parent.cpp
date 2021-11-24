#include<iostream>
#include <map>
#include<string.h>
#include<string>
#include <utility>
#include <vector>
#include "string_divide.h"
#include "Parent.h"
using namespace std;

Parent::Parent(string inputFiles, string outputFiles){
    this->inputFiles = inputFiles;
    this->outputFiles = outputFiles;
    numWords = 0;
    numConvertedWords = 0;
    numCharacters = 0;
    numConvertedCharacters = 0;
}

string Parent::getStaticString(){
    string result = "";
    result += "Input file: " + inputFiles + "\n";
    result += "Output file: " + outputFiles + "\n";
    result = result + "Time Complete: " + "\n";
    result = result + "Duration [second]: " + "\n";
    result += "Word count in input files: " + to_string(numWords) + "\n";
    result += "Word converted: " + to_string(numConvertedWords) + "\n";
    result += "Word with error: " + to_string(numWords - numConvertedWords) + "\n";
    result += "Total number of characters: " + to_string(numCharacters) + "\n";
    result += "Number of characters have been converted: " + to_string(numConvertedCharacters) + "\n";
    result += "Number of characters are NOT converted: " + to_string(numCharacters - numConvertedCharacters) + "\n";
    return result;
}

map<string, string> Parent::getHashFunction(string file1, string file2){
    map<string, string> result;
    result["test"] = "ok";
    return result;
}

string Parent::transform(){
    return "";
}

void Parent::save(){
    return;
}

void Parent::printStatics(){
    string statics = getStaticString();
    cout << statics;
}
