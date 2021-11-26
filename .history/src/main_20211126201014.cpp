#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include "Encoder.h"
#include "Decoder.h"
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

    // Check coinciding output file-name
    if (existsCheck())

    if (argc == 3)
    {
        bool check = checkFile(ip);
        if (check) {
            Decoder *test = new Decoder(ip, op);
            test->run();
        }
            
        else {
            Encoder *test = new Encoder(ip, op);
            test->run();
        }
    }

    else if (argc == 4 || argc == 5)
    {
        // -t, -m, -c optional command
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

        if (t != 0 && m != 0) unrecognizedCd();

        // -t and -c optional command
        else if (t == 1 && m == 0 && c == 1)
        {
            Encoder *test = new Encoder(ip, op);
            test->run();
            test->printStatics();
        }

        // -t optional command
        else if (t == 1 && m == 0)
        {
            Encoder *test = new Encoder(ip, op);
            test->run();
            //test->printStatics();
        }

        // -m and -c optional command
        else if (t == 0 && m == 1 && c == 1)
        {
            // Converting
            Decoder *test = new Decoder(ip, op);
            test->run();
            test->printStatics();
        }

        // -m optional command
        else if (t == 0 && m == 1)
        {
            // Converting
            Decoder *test = new Decoder(ip, op);
            test->run();
            //test->printStatics();
        }

        // -c optional command
        else if (t == 0 && m == 0 && c == 1)
        {
            bool check = checkFile(ip);
            if (check)
            {
                Decoder *test = new Decoder(ip, op);
                test->run();
                test->printStatics();
            }

            else
            {
                Encoder *test = new Encoder(ip, op);
                test->run();
                test->printStatics();
            }

        }

        else
            unrecognizedCd();
    }

    else
        unrecognizedCd();
}
