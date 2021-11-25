#include <iostream>
#include <map>
#include <string.h>
#include "read_file.h"
#include <string>
#include <utility>
#include <vector>
#include "string_divide.h"
#include "Parent.h"
#include <fstream>
using namespace std;

Parent::Parent(string inputFiles, string outputFiles)
{
    this->inputFiles = inputFiles;
    this->outputFiles = outputFiles;
    numWords = 0;
    numConvertedWords = 0;
    numCharacters = 0;
    numConvertedCharacters = 0;
}

string Parent::getStaticString()
{
    string result = "";
    result += "Input file: " + inputFiles + "\n";
    result += "Output file: " + outputFiles + "\n";
    result = result + "Time Complete: " + time.getEndTime() + "\n";
    result = result + "Duration [second]: " + to_string(time.getDuration()) + "\n";
    result += "Word count in input files: " + to_string(numWords) + "\n";
    result += "Word converted: " + to_string(numConvertedWords) + "\n";
    result += "Word with error: " + to_string(numWords - numConvertedWords) + "\n";
    result += "Total number of characters: " + to_string(numCharacters) + "\n";
    result += "Number of characters have been converted: " + to_string(numConvertedCharacters) + "\n";
    result += "Number of characters are NOT converted: " + to_string(numCharacters - numConvertedCharacters) + "\n";
    return result;
}

map<string, string> Parent::getHashFunction(string keysFile, string valuesFile)
{
    map<string, string> result;
    vector<string> keyStrings = read_file(keysFile);
    vector<string> valueStrings = read_file(valuesFile);
    auto itKey = keyStrings.begin();
    auto itValue = valueStrings.begin();
    while (itKey != keyStrings.end())
    {
        result[*itKey] = *itValue;
        itKey++;
        itValue++;
    }
    return result;
}

string Parent::transform()
{
    return "";
}

void Parent::save(string s)
{
    ofstream myfile;
    myfile.open("result.log", ios::app);
    myfile << s;
    myfile.close();
}

void Parent::printStatics()
{
    string statics = getStaticString();
    cout << statics;
}
