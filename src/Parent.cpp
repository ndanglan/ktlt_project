#include<iostream>
#include<string.h>
#include <vector>
#include "string_divide.h"
#include "Parent.h"
using namespace std;

Parent::Parent(string inputFiles, string outputFiles){
    this->inputFiles = inputFiles;
    this->outputFiles = outputFiles;
}

void Parent::divideInputFiles(){
    vector<string> result = stringSplit(outputFiles, '\\');
    for(string s: result){
        cout << s << endl;
    }
}
