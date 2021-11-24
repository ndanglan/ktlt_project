#include<fstream>
#include<iostream>
#include<vector>
#include<string.h>
#include<string>
#include "read_file.h"
#include<fstream>
using namespace std;


vector<string> read_file(string file){
    vector<string> result;
    string text; 
    ifstream myFile(file);
    while(getline(myFile, text)){
        result.push_back(text);
    }
    myFile.close();
    return result;
}

