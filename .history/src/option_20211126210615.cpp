#include <iostream>
#include <fstream>
#include "option.h"
#include "read_file.h"

using namespace std;

void h_Option()
{
    // Create a text string, which is used to output the text file
    string myText;

    // Read from the text file
    ifstream MyReadFile("readme.txt");

    // Use a while loop together with the getline() function to read the file line by line
    while (getline(MyReadFile, myText))
    {
        // Output the text from the file
        cout << myText << endl;
    }

    // Close the file
    MyReadFile.close();
}

void unrecognizedCd()
{
    string s = "Error 00: Unknown command. Type \"morse -h\" for help.";
    writeLogFile(s);
    cout << s;
}

void errorOpenFile(string ip)
{
    if ()
    cerr << "Error 01: FILENAME could not be opened";
}

void overrideFile()
{
    cout << "Warning: FILENAME already exists. Do you wish to overwrite (y, n)?";
    char c;
    cin >> c;
    if (c == 'y') {
        //overwrite
    }
    else {
        cout << "Error 02: FILENAME is not allowed to access";
    }
}