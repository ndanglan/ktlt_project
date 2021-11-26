#include <iostream>
#include <fstream>
#include <checkFile.h>
#include <string>
#include <vector>
#include "read_file.h"

using namespace std;

bool checkFile(string file) {
    vector<string> result = read_file(file);

bool checkFile(string file){
    vector<string> myText = read_file(file);
    bool check = true;

    for (unsigned int i = 0; i < myText.size(); i++)
    {
        if (myText[i] != "." && myText[i] != "-" && myText[i] != "/")
        {
            check = false;
            break;
        }
    }

    return check;
}