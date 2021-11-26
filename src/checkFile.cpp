#include <iostream>
#include <fstream>
#include "checkFile.h"
#include "read_file.h"
#include <string>
#include <vector>
#include <read_file.h>

using namespace std;

// vector<string> read_file(string file)
// {
//     vector<string> result;
//     string text;
//     ifstream myFile(file);
//     while (getline(myFile, text))
//     {
//         result.push_back(text);
//     }
//     myFile.close();
//     return result;
// }

bool checkFile(string file)
{
    vector<string> myText = read_file(file);
    bool check = true;

    for (unsigned int i = 0; i < myText.size(); i++)
    {
        if (myText[i] != "." && myText[i] != "-" && myText[i] != "/")
        {
            check = false;
            break;
        }
        if (check == false)
            break;
    }

    return check;
}

// int main () {
//     bool check = checkFile();
//     if (check) cout << "Morse Code";
//     else cout << "Text";
// }
