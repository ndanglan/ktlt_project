#include <cstdlib>
#include <iostream>
#include <map>
#include <string.h>
#include <string>
#include <utility>
#include <vector>
#include <fstream>

using namespace std;

string basename(string filename)
{
  if (filename.empty())
  {
    return {};
  }

  auto len = filename.length();
  auto index = filename.find_last_of("/\\");

  if (index == std::string::npos)
  {
    return filename;
  }

  if (index + 1 >= len)
  {

    len--;
    index = filename.substr(0, len).find_last_of("/\\");

    if (len == 0)
    {
      return filename;
    }

    if (index == 0)
    {
      return filename.substr(1, len - 1);
    }

    if (index == std::string::npos)
    {
      return filename.substr(0, len);
    }

    return filename.substr(index + 1, len - index - 1);
  }

  return filename.substr(index + 1, len - index);
}

string baseName2(string basename)
{
  short posIn = basename.find(".");
  basename = basename.substr(0, (posIn));
  return basename;
}
int main()
{
  string test = basename("alsdkfjalsfd/input/input_test.txt");
  string tes2 = baseName2(test);
  cout << test << endl;
  cout << tes2 << endl;
  return 0;
}