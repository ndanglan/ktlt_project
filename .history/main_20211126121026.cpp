#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "option.cpp"
#include "checkFile.cpp"

using namespace std;

int main(int argc, char *argv[]) // Number of strings in array argv and Array of command-line argument strings
{
    int count;
    char option[4][3] = {"-h", "-t", "-m", "-c"};
    // -h optional command
    for (count = 0; count < argc; count++)
    {
        string arg = argv[count];
        if (arg == "-h")
        {
            h_Option();
            return 0;
        }
    }

    // Check File name
    string ip = argv[1];
    string op = argv[2];
    for (int i = 0; i < 4; i++)
    {
        if (ip == option[i] || op == option[i])
        {
            unrecognizedCd();
            return 0;
        }
    }

    if (argc == 3)
    {
        bool check = checkFile("readme.txt");
        if (check)
            cout << "Morse Code";
        else
            cout << "Text";
    }

    else if (argc == 4 || argc == 5)
    {
        // -t, -m optional command
        int t, m, c;
        t = m = c = 0;
        for (count = 3; count < argc; count++)
        {
            string arg = argv[count];
            if (arg == "-t")
                t++;
            else if (arg == "-m")
                m++;
            else if (arg == "-c")
                c++;
            else
            {
                unrecognizedCd();
                return 0;
            }
        }

        if (t != 0 && m != 0)
            unrecognizedCd();

        // -t optional command
        else if (t == 1 && m == 0)
        {
            // Converting
        }

        // -m optional command
        else if (t == 0 && m == 1)
        {
            // Converting
        }

        else
            unrecognizedCd();

        // -c optional command
        if (c == 1)
        {
            // Print file log
            // return 0;
        }

        // else unrecognizedCd();
    }

    else
        unrecognizedCd();
}
