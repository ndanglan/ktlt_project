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
    int count = 0;

    for (unsigned int i = 0; i < myText.size(); i++)
    {
        if (myText[i] != "." && myText[i] != "-" && myText[i] != "/" && myText[i] != " ")
        {
            count++;
        }
    }
    if (count > 0)
    {
        check = true;
    }
    else
    {
        check = false;
    }
    return check;
}