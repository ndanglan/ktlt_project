#include <iostream>
#include <ctime>
#include "TimeClass.h"
#include <string.h>
#include <string>
#include <chrono>

using namespace std;

void TimeClass::start()
{
    startPoint = time(0);
}

void TimeClass::end()
{
    endPoint = time(0);
    ltm = localtime(&endPoint);
    duration = difftime(endPoint, startPoint);
}

string TimeClass::getYear()
{
    string year = to_string(1900 + ltm->tm_year);
    return year;
}

string TimeClass::getMonth()
{
    string months[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    string month = months[ltm->tm_mon];
    return month;
}

string TimeClass::getDay()
{
    string day;
    if (ltm->tm_mday < 10)
    {
        day = "0" + to_string(ltm->tm_mday);
        return day;
    }
    day = to_string(ltm->tm_mday);
    return day;
}

string TimeClass::getTime()
{
    string time;
    time = to_string(ltm->tm_hour) + ":" + to_string(ltm->tm_min) + ":" + to_string(ltm->tm_sec);
    return time;
}

string TimeClass::getEndTime()
{
    string year = getYear();
    string month = getMonth();
    string day = getDay();
    string time = getTime();
    endTime = year + "-" + month + "-" + day + " " + time;
    return endTime;
}

double TimeClass::getDuration()
{
    return duration;
}

string TimeClass::getLogInfor()
{
    string year = getYear();
    string month = to_string(1 + ltm->tm_mon);
    string day = getDay();
    string time = to_string(ltm->tm_hour) + to_string(ltm->tm_min) + to_string(ltm->tm_sec);
    string logInfo = year + month + day + "_" + time;
    return logInfo;
}

