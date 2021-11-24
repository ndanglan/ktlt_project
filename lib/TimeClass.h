#include<string.h>
#include<iostream>
#include<ctime>
using namespace std;


class TimeClass{
    private:
        time_t startPoint;
        double duration;
        char* endTime;

    public:
        void start();
        void end();        
        string getEndTime();
        double getDuration(); 
};
