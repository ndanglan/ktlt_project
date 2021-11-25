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
using namespace std;

Encoder::Encoder(string inputFiles, string outputFiles): Parent(inputFiles, outputFiles){
    hashFunction = getHashFunction("conventions\\normal_character.txt", "conventions\\morse_character.txt");
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
