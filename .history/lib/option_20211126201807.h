#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;

inline bool existCheck(const std::string &name);
void h_Option();
void t_Option();
void m_Option();
void c_Option();
void unrecognizedCd();
void detectFile();
void overrideFile();
void writeLogFile(string s);