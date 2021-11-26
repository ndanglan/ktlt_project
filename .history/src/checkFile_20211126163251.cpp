#include <iostream>
#include <fstream>
#include "checkFile.h"
#include <string>
#include <vector>
#include <

using namespace std;

// bool checkFile(string file) {
//     vector<string> result;
//     string text;
//     ifstream myFile(file);
//     if (!myFile) {
//         cerr << "Cannot open input file :(";
//         return 0;
//     }
//     else {
//         while (getline(myFile, text))
//         {
//             result.push_back(text);
//         }
//     }
//     myFile.close();

//     bool check = true;

//     for (unsigned int i = 0; i < result.size(); i++)
//     {
//         if (result[i] != "." && result[i] != "-" && result[i] != "/")
//         {
//             check = false;
//             break;
//         }
//     }

//     return check;
// }

bool checkFile(string file)
{
    vector<string> result;
    string text;
    ifstream myFile(file);
    if (!myFile)
    {
        cerr << "Cannot open input file :(";
        return 0;
    }
    else
    {
        while (getline(myFile, text))
        {
            result.push_back(text);
        }
    }
    myFile.close();

    bool check = true;

    for (unsigned int i = 0; i < result.size(); i++)
    {
        if (result[i] != "." && result[i] != "-" && result[i] != "/")
        {
            check = false;
            break;
        }
    }

    return check;
}

// int main () {
//     bool check = checkFile();
//     if (check) cout << "Morse Code";
//     else cout << "Text";
// }
