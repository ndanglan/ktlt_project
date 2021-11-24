#include<iostream>
#include<ctime>
#include "TimeClass.h"
#include<string.h>
#include<string>
using namespace std;


void TimeClass::start(){
    startPoint = time(0);   
}

void TimeClass::end(){
    time_t now = time(0);
    duration = difftime(now, startPoint);
    endTime = ctime(&now);
}

string TimeClass::getEndTime(){
    string str(endTime);
    return endTime;
}

double TimeClass::getDuration(){
    return duration;
}

