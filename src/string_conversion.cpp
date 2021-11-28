#include<iostream>
#include<string>
#include "string_conversion.h"
using namespace std;


string toString(const char* characters){
    string result = "";
    int i = 0;
    do{
        result += to_string(characters[i]);
        i++;
    }
    while(characters[i] != '\0');
    return result;
}
