#include <iostream>
#include <ctime>
#include <string.h>
#include <string>

using namespace std;

int main()
{
  // current date/time based on current system
  time_t now = time(0);
  cout << "Number of sec since January 1,1970 is:: " << now << endl;
  tm *ltm = localtime(&now);
  string months[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
  // print various components of tm structure.
  cout << "Month: " << months[ltm->tm_mon] << endl;
  cout << "Day: " << ltm->tm_mday << endl;
  cout << "Time: " << ltm->tm_hour << ":";
  cout << ltm->tm_min << ":";
  cout << ltm->tm_sec << endl;
  cout << "Year:" << to_string(1900 + ltm->tm_year) << endl;
}