#include <iostream>
#include "Encoder.h"
#include "Parent.h"
#include <iterator>
#include <map>
#include <stdexcept>
#include <string.h>
#include <sstream>
#include <string>
#include <vector>
#include <numeric>
#include "read_file.h"
using namespace std;

Encoder::Encoder(string inputFiles, string outputFiles) : Parent(inputFiles, outputFiles)
{
    hashFunction = getHashFunction("conventions\\normal_character.txt", "conventions\\morse_character.txt");
}

string Encoder::transform(string inputFile)
{
    vector<string> inputStrings = read_file(inputFile);

    time.start();

    string result = "";
    for (auto const &s : inputStrings)
    {
        int i = 0;
        do
        {
            if (s[i] == ' ')
            {
                result += "/";
            }
            else
            {
                stringstream ss;
                ss << s[i];
                result += hashFunction[ss.str()] + " ";
            }
            i++;
        } while (s[i] != '\0');
        result += '\n';
    }
    time.end();
    return result;
}

void Encoder::run()
{
    result = transform(inputFiles);
    save_file(result, outputFiles);
}
