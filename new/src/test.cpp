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
    string s;
    cout << "Enter your string: ";
    getline(cin, s);
    string result = test->transform(s);
    cout << result << endl;
    test->printStatics();
    // sau khi print sẽ save
    test->save();
    return 0;
}
