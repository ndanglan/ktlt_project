#include "Encoder.h"
#include<iostream>
using namespace std;

int main(){
    Encoder* test = new Encoder("\\Thao\\C++\\src", "\\Thao\\C++\\bin");
    test->transform();
    test->printStatics(); 
    return 0;
}
