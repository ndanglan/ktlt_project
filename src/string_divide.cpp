#include <iostream>
#include <string.h>
#include <vector>
#include "string_divide.h"
using namespace std;

vector<string> stringSplit(string str, char divideObject)
{
    vector<string> result;
    unsigned int i = 0;
    string subStr = "";
    while (i < str.length())
    {
        if (str[i] != divideObject)
        {
            subStr += str[i];
        }
        else
        {
            result.push_back(subStr);
            subStr = "";
        }
        i++;
    }
    result.push_back(subStr);
    return result;
}

bool checkCharacterExist(string s, string c)
{
    for (unsigned int i = 0; i < s.length(); i++)
    {
        if (s[i] == c)
        {
            return true;
        }
    }
    return false;
}
