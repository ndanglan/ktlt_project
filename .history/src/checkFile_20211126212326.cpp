#include <iostream>
#include <fstream>
#include "checkFile.h"
#include <string>
#include <vector>

using namespace std;

bool checkFile(string file) {
    vect

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
