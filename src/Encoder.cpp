#include<iostream>
#include "Encoder.h"
#include "Parent.h"
#include <map>
#include<string.h>
using namespace std;

Encoder::Encoder(string inputFiles, string outputFiles): Parent(inputFiles, outputFiles){
}

map<string, string> Encoder::getHashFunction(string, string){
    map<string, string> result;
    result["a"] = "-..";
    return result;
}

string Encoder::transform(){
    time.start();
    string result = "";
    cout << "Encode completely";
    time.end();
    return result;
}
