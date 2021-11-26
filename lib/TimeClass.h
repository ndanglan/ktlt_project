#pragma once
#include<string.h>
#include<iostream>
#include<ctime>
using namespace std;


class TimeClass{
    private:
        time_t startPoint;
        double duration;
        char* endTime;
        time_t endPoint;

    public:
        void start();
        void end();        
        string getEndTime();
        double getDuration(); 
        string getLogInfor();
};
