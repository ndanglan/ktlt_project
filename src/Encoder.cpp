#include <iostream>
#include "Encoder.h"
#include "Parent.h"
#include <iterator>
#include <map>
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

string Encoder::transformOneWord(string s){
    string result;
    int i = 0;
    do
    {
        stringstream ss;
        ss << s[i];
        if(hashFunction.find(ss.str()) != hashFunction.end()){
            result += hashFunction[ss.str()] + " ";
            numConvertedCharacters ++; 
        }
        else{
            result += "# ";
        }
        i++;
        numCharacters ++;
    } while (s[i] != '\0');
    return result;
}

string Encoder::transformOneLine(string s, int line)
{
    string result = "";
    vector<string> words = stringSplit(s, ' ');
    for(string word:words){
        if(word != ""){
            string oneWordResult = transformOneWord(word);
            if(!checkCharacterExist(oneWordResult, '#')){
                numConvertedWords ++;
            }
            result += oneWordResult + "/ ";
            numWords ++;
        }
    }
    return result;
}
