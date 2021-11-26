#include <iostream>
#include <fstream>
#include <checkFile.h>
#include <string>
#include <vector>
#include "read_file.h"

using namespace std;

<<<<<<< HEAD
bool checkFile(string file) {
    vector<string> result = read_file(file);
=======
// vector<string> read_file(string file)
// {
//     vector<string> myText;
//     string text;
//     ifstream myFile(file);
//     while (getline(myFile, text))
//     {
//         myText.push_back(text);
//     }
//     myFile.close();
//     return myText;
// }
>>>>>>> bd42383bcc9e7858ace7792da2e525f33eed1b8c

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