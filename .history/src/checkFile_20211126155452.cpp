#include <iostream>
#include <fstream>
#include "checkFile.h"
#include <string>
#include <vector>

using namespace std;

bool checkFile(string file) {
    vector<string> result;
    string text;
    ifstream myFile(file);
    if (!myFile) {
        cerr << "Cannot open input file :(";
        return 0;
    }
    else {
        while (getline(myFile, text))
        {
            result.push_back(text);
        }
    }
    myFile.close();

    bool check = true;

<<<<<<< HEAD
    for (int i = 0; i < result.size(); i++)
=======
    for (unsigned int i = 0; i < myText.size(); i++)
>>>>>>> e91bfc20d8405f8ffe08b130e5a533a92bb05cf9
    {
        if (result[i] != "." && result[i] != "-" && result[i] != "/")
        {
            check = false;
            break;
        }
        if (check == false) break;
    }

    return check;
}

// int main () {
//     bool check = checkFile();
//     if (check) cout << "Morse Code";
//     else cout << "Text";
// }