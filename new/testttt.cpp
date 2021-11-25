#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ofstream myfile;
  for (int i = 0; i < 2; i++)
  {
    myfile.open("2222.txt", ios::app);
    myfile << "Writing this to a file.\n";
    myfile.close();
  }
  return 0;
}