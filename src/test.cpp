#include "Encoder.h"
#include "read_file.h"
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <string.h>
using namespace std;

int main()
{
    Encoder *test = new Encoder("inputs/input_test.txt", "outputs/output_test.txt");
    test->run();
    test->printStatics();
    return 0;
}
