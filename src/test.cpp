#include "Encoder.h"
#include "read_file.h"
#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<string.h>
using namespace std;

int main(){
    Encoder* test = new Encoder("inputs/test.txt", "outputs/output.txt");
    string s;
    cout << "Enter your string: ";
    getline(cin, s);
    string result = test->transform(s);
    cout << result << endl;
    test->printStatics(); 
    return 0;
}
