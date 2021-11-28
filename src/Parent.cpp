#include <cstdlib>
#include <ctime>
#include <sstream>
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

Parent::Parent(string inputFile, string outputFile)
{
    this->inputFile = inputFile;
    this->outputFile = outputFile;
    numWords = 0;
    numConvertedWords = 0;
    numCharacters = 0;
    numConvertedCharacters = 0;
    nameLogFile = "";
}

string Parent::getStaticString()
{
    string result = "";
    result += "Input file: " + inputFile + "\n";
    result += "Output file: " + outputFile + "\n";
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
        if(*itKey != "..-.."){
            result[*itKey] = *itValue;
        }
        itKey++;
        itValue++;
    }
    return result;
}

string Parent::transformOneLine(string s, int line)
{
    return "";
}

string Parent::transform(string inputFile)
{

    vector<string> inputStrings = read_file(inputFile);
    time.start();
    string result = "";
    int i = 1;
    for (auto const &s : inputStrings)
    {
        result += transformOneLine(s, i++);
        result += "\n";
    }
    time.end();
    return result;
}

void Parent::printStatics()
{
    cout << staticString;
    for (string s : errorsMessages)
    {
        staticString += s;
        staticString += "\n";
    }
    save_file(staticString, nameLogFile);
}

string Parent::basename(string filename)
{
    if (filename.empty())
    {
        return {};
    }

    auto len = filename.length();
    auto index = filename.find_last_of("/\\");

    if (index == std::string::npos)
    {
        return filename;
    }

    if (index + 1 >= len)
    {

        len--;
        index = filename.substr(0, len).find_last_of("/\\");

        if (len == 0)
        {
            return filename;
        }

        if (index == 0)
        {
            return filename.substr(1, len - 1);
        }

        if (index == std::string::npos)
        {
            return filename.substr(0, len);
        }

        return filename.substr(index + 1, len - index - 1);
    }

    return filename.substr(index + 1, len - index);
}

string Parent::pureName(string basename)
{
    short posIn = basename.find(".");
    basename = basename.substr(0, (posIn));
    return basename;
}

void Parent::run()
{
    string result = transform(inputFile);
    staticString = getStaticString();
    string inputBaseName = basename(inputFile);
    string outputBaseName = basename(outputFile);
    nameLogFile = "log/" + pureName(inputBaseName) + "_" + pureName(outputBaseName) + "_" + time.getLogInfor() + ".log";
    save_file(result, outputFile);
    save_file(staticString, nameLogFile);
    printErrors();
}

void Parent::printErrors()
{
    for (string msg : errorsMessages)
    {
        cout << msg << endl;
    }
}

void Parent::addErrorMessage()
{
    return;
}
