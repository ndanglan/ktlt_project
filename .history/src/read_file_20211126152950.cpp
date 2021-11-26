#include <fstream>
#include <iostream>
#include <vector>
#include <string.h>
#include <string>
#include "read_file.h"
using namespace std;

vector<string> read_file(string file)
{
    vector<string> result;
    string text;
    ifstream myFile(file);
    if (!myFile) 
    while (getline(myFile, text))
    {
        result.push_back(text);
    }
    myFile.close();
    return result;
}

void save_file(string value, string file)
{
    ofstream myfile;
    myfile.open(file);
    myfile << value;
    myfile.close();
}
