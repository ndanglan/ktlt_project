#include <iostream>
#include <fstream>
#include <checkFile.h>
#include <string>
#include <vector>
#include "read_file.h"

using namespace std;

bool checkFile(string file)
{
    vector<string> myText = read_file(file);
    bool check = true;

    for (unsigned int i = 0; i < myText.size(); i++)
    {
        for (unsigned int j = 0; j < myText[i].length(); j++)
        {
            if (myText[i][j] != '.' && myText[i][j] != '-' && myText[i][j] != '/' && myText[i][j] != ' ')
            {
                check = false;
                break;
            }
        }
    }
    return check;
}