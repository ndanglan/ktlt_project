#include <iostream>
#include <unordered_map>
#include <string>
#include <algorithm>
#include <cstring>

using namespace std;

class Hashtable
{
  unordered_map<const void *, const void *> hashTable;

public:
  void put(const void *key, const void *value)
  {
    hashTable[key] = value;
  }

  const void *get(const void *key)
  {
    return hashTable[key];
  }
};

int main()
{
  // Declare hashtable
  Hashtable hashTable;
  Hashtable inverseHashTable;

  // push key and value string char
  hashTable.put(".−", "a");
  hashTable.put("−...", "b");
  hashTable.put("−.−.", "c");
  hashTable.put("−..", "d");
  hashTable.put(".", "e");
  hashTable.put("..-.", "f");
  hashTable.put("--.", "g");
  hashTable.put("....", "h");
  hashTable.put("..", "i");
  hashTable.put(".---", "j");
  hashTable.put("-.-", "k");
  hashTable.put(".-..", "l");
  hashTable.put("--", "m");
  hashTable.put("-.", "n");
  hashTable.put("---", "o");
  hashTable.put(".--.", "p");
  hashTable.put("--.-", "q");
  hashTable.put(".-.", "r");
  hashTable.put("...", "s");
  hashTable.put("-", "t");
  hashTable.put("..-", "u");
  hashTable.put("...-", "v");
  hashTable.put(".--", "w");
  hashTable.put("-..-", "x");
  hashTable.put("-.--", "y");
  hashTable.put("--..", "z");
  hashTable.put(" ", " ");
  hashTable.put(".----", "1");
  hashTable.put("..---", "2");
  hashTable.put("...--", "3");
  hashTable.put("....-", "4");
  hashTable.put(".....", "5");
  hashTable.put("-....", "6");
  hashTable.put("--...", "7");
  hashTable.put("---..", "8");
  hashTable.put("----.", "9");
  hashTable.put("-----", "0");

  inverseHashTable.put("a", ".−");
  inverseHashTable.put("b", "−...");
  inverseHashTable.put("c", "−.−.");
  inverseHashTable.put("d", "−..");
  inverseHashTable.put("e", ".");
  inverseHashTable.put("f", "..-.");
  inverseHashTable.put("g", "−-.");
  inverseHashTable.put("h", "....");
  inverseHashTable.put("i", "..");
  inverseHashTable.put("j", ".---");
  inverseHashTable.put("k", "-.−");
  inverseHashTable.put("l", ".−..");
  inverseHashTable.put("m", "--");
  inverseHashTable.put("n", "-.");
  inverseHashTable.put("o", "---");
  inverseHashTable.put("p", ".−-.");
  inverseHashTable.put("q", "--.-");
  inverseHashTable.put("r", ".−.");
  inverseHashTable.put("s", "...");
  inverseHashTable.put("t", "−");
  inverseHashTable.put("u", "..−");
  inverseHashTable.put("v", "...-");
  inverseHashTable.put("w", ".--");
  inverseHashTable.put("x", "-..-");
  inverseHashTable.put("y", "-.--");
  inverseHashTable.put("z", "--..");
  inverseHashTable.put("1", ".−---");
  inverseHashTable.put("2", "..---");
  inverseHashTable.put("3", "...--");
  inverseHashTable.put("4", "....-");
  inverseHashTable.put("5", ".....");
  inverseHashTable.put("6", "-....");
  inverseHashTable.put("7", "--...");
  inverseHashTable.put("8", "---..");
  inverseHashTable.put("9", "----.");
  inverseHashTable.put("0", "-----");

  string strTest = "----- .---- ..---";
  string strTest2 = "Hello world 123";

  std::for_each(strTest2.begin(), strTest2.end(), [](char &c)
                { c = ::tolower(c); });

  return 0;
}