#include<iostream>
#include<string.h>
#include <vector>
#include "string_divide.h"
using namespace std;

class Parent{
    private:
        string inputFiles;
        string outputFiles;

    public:
        Parent(string inputFiles, string outputFiles){
            this->inputFiles = inputFiles;
            this->outputFiles = outputFiles;
        }

        void divideInputFiles(){
            vector<string> result = stringSplit(outputFiles, '\\');
            for(string s: result){
                cout << s << endl;
            }
        }
};
