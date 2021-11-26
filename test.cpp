#include <iostream>
#include <string>

std::string
basename(const std::string &filename)
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

  std::string s = filename.substr(index + 1, len - index);
  std::size_t posIn = s.find(".");
  s = s.substr(0, (posIn));
  return s;
}

int main()
{
  std::string pathname = "inputs/input.txt";
  std::string s = basename(pathname);
  std::cout << s << std::endl;
  return 0;
}