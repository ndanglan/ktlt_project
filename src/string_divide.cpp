#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

vector<string> stringSplit(string str, char divideObject){
    vector<string> result;
    int i = 0;
    string subStr = "";
    while(i < str.length()){
        if(str[i] != divideObject){
            subStr += str[i];
        } 
        else{
            result.push_back(subStr);
            subStr = "";
        }
        i++;
    }
    result.push_back(subStr);
    return result;
}
