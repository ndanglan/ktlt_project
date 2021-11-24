#include<iostream>
#include<string.h>
using namespace std;

class Parent{
    private:
        string inputFiles;
        string outputFiles;

    public:
        Parent(string inputFiles, string outputFiles);
        void divideInputFiles();
};
