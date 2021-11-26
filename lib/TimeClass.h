#pragma once
#include <string.h>
#include <iostream>
#include <ctime>
using namespace std;

class TimeClass
{
private:
    time_t startPoint;
    double duration;
    string endTime;
    time_t endPoint;
    tm *ltm;

public:
    void start();
    void end();
    string getYear();
    string getMonth();
    string getDay();
    string getTime();
    string getEndTime();
    double getDuration();
    string getLogInfor();
};
