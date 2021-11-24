#include<iostream>
#include "Encoder.h"
#include "Parent.h"
#include <iterator>
#include <map>
#include <stdexcept>
#include<string.h>
#include<sstream>
#include <string>
#include <vector>
#include "string_conversion.h"
#include "read_file.h"
using namespace std;

Encoder::Encoder(string inputFiles, string outputFiles): Parent(inputFiles, outputFiles){
    hashFunction = getHashFunction("conventions\\normal_character.txt", "conventions\\morse_character.txt");
}

map<string, string> Encoder::getHashFunction(string keysFile, string valuesFile){
    map<string, string> result;
    vector<string> keyStrings = read_file(keysFile);
    vector<string> valueStrings = read_file(valuesFile);
    auto itKey = keyStrings.begin();
    auto itValue = valueStrings.begin();
    while(itKey != keyStrings.end()){
        result[*itKey] = *itValue;
        itKey ++;
        itValue ++;
    }
    return result;
}

string Encoder::transform(string s){
    time.start();
    string result = "";
    int i = 0;
    do{
        if(s[i] == ' '){
            result += "/";
        }
        else{
            stringstream ss;
            ss << s[i];
            result += hashFunction[ss.str()] + " ";
        }
        i++;
    }
    while(s[i] != '\0');
    time.end();
    return result;
}
