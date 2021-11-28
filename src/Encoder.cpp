#include <iostream>
#include "Encoder.h"
#include "Parent.h"
#include <iterator>
#include <map>
#include <ostream>
#include <stdexcept>
#include <string.h>
#include <sstream>
#include <string>
#include <vector>
#include <numeric>
#include "read_file.h"
#include "string_divide.h"
using namespace std;

Encoder::Encoder(string inputFiles, string outputFiles) : Parent(inputFiles, outputFiles)
{
    hashFunction = getHashFunction("conventions\\normal_character.txt", "conventions\\morse_character.txt");
}

string Encoder::transformOneWord(string s, int line)
{
    string result;
    unsigned int i = 0;
    do{
        // detect e accented
        if(s[i] == -61 && s[i+1] == -87){
            result += "..-.. ";
            i++;
            numConvertedCharacters ++;
        }
        else{
            stringstream ss;
            if (s[i] >= 'A' && s[i] <= 'Z'){
                ss << (char)(s[i] - 'A' + 'a');
            }
            else{
                ss << s[i];
            }
            if (hashFunction.find(ss.str()) != hashFunction.end()){
                result += hashFunction[ss.str()] + " ";
                numConvertedCharacters++;
            }
            else{
                addErrorMessage(s[i], line);
                result += "# ";
            }
        }
        i++;
        numCharacters++;
    } while (s[i] != '\0');
    return result;
}

string Encoder::transformOneLine(string s, int line)
{
    string result = "";
    vector<string> words = stringSplit(s, ' ');
    while(words.back() == ""){
        words.pop_back();
    }
    int index = -1;
    for (string word : words)
    {
        if (word != "")
        {
            string oneWordResult = transformOneWord(word, line);
            bool withError = false;
            do
            {
                index = checkCharacterExist(oneWordResult, '#');
                if (index == -1)
                {
                    if (!withError)
                    {
                        numConvertedWords++;
                    }
                }
                else
                {
                    oneWordResult = oneWordResult.substr(0, index) + "........" + oneWordResult.substr(index + 1, oneWordResult.length() - index - 1);
                    withError = true;
                }
            } while (index != -1);
            result += oneWordResult;
            if (word != words.back())
            {

                result += "/ ";
            }
            numWords++;
        }
    }
    return result;
}

void Encoder::addErrorMessage(char c, int line)
{
    stringstream ss;
    ss << c;
    string error_msg = "Error 03: Unrecognized character " + ss.str() + " on line " + to_string(line) + ".";
    errorsMessages.push_back(error_msg);
}
