#include <iostream>
#include "Decoder.h"
#include <string>
#include <string.h>
#include <vector>
#include "string_divide.h"
#include "Parent.h"
using namespace std;

Decoder::Decoder(string inputFile, string outputFile) : Parent(inputFile, outputFile)
{
    hashFunction = getHashFunction("conventions\\morse_character.txt", "conventions\\normal_character.txt");
}

string Decoder::transformOneCharacter(string s, int line)
{
    string result;
    if (s.length() > 7)
    {
        result = "#";
    }
    else if (hashFunction.find(s) != hashFunction.end())
    {
        result = hashFunction[s];
    }
    else
    {
        result = "*";
    }
    return result;
}

string Decoder::transformOneWord(string s, int line)
{
    string result = "";
    vector<string> characters = stringSplit(s, ' ');
    for (string morseChar : characters)
    {
        if (morseChar != "")
        {
            string morseResult = transformOneCharacter(morseChar, line);
            if (morseResult == "#" || morseResult == "*")
            {
                addErrorMessage(morseChar, line);
            }
            else
            {
                numConvertedCharacters++;
            }
            result += morseResult;
            numCharacters++;
        }
    }
    return result;
}

string Decoder::transformOneLine(string s, int line)
{
    string result = "";
    vector<string> words = stringSplit(s, '/');
    for (string word : words)
    {
        if (word != "")
        {
            string oneWordResult = transformOneWord(word, line);
            if (checkCharacterExist(oneWordResult, '#') == -1 && checkCharacterExist(oneWordResult, '*') == -1)
            {
                numConvertedWords++;
            }
            result += oneWordResult + " ";
            numWords++;
        }
    }
    return result;
}

void Decoder::addErrorMessage(string morseChar, int line)
{
    string error_msg = "Error 04: Invalid Morse Code " + morseChar + " on line " + to_string(line) + ".";
    errorsMessages.push_back(error_msg);
}
