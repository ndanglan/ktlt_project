#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include "Encoder.h"
#include "read_file.h"
#include "option.h"
#include "checkFile.h"

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

<<<<<<< HEAD
        // -t and -c optional command
        else if (t == 1 && m == 0 && c == 1)
        {
            Encoder *test = new Encoder("input_test.txt", "outputs/output_test.txt");
            test->run();
            test->printStatics();
        }

        // -t optional command
        else if (t == 1 && m == 0)
        {
            Encoder *test = new Encoder("input_test.txt", "outputs/output_test.txt");
            test->run();
            //test->printStatics();
=======
        

        // -m optional command
        else if (t == 0 && m == 1)
        {
            // Converting
        }

        else
            unrecognizedCd();

<<<<<<< HEAD
=======
        // -c optional command
        if (c == 1)
        {
            // Print file log
            // return 0;
        }
>>>>>>> 9542c3ebc9650faf11a506e3b369749c95333295
    }

    else
        unrecognizedCd();
}
