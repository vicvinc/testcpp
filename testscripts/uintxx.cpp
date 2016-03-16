#include <iostream>
#include <bitset>
#include <string>

using namespace std;

int main(int argc, const char *argv[])
{
  uint32_t i;
  i = 2;
  cout << "unit32_t " << i << endl;
  uint32_t value(42);
  bitset<32> bits(value);
  cout << bits << endl;
  string mystring = \
    bits.to_string<char,string::traits_type,string::allocator_type>();
  cout << "bitset cout " << bits.count() << endl; 
  cout << mystring << endl;
  // Storing integral values in the string:
#if 0
  for(auto i; bits.to_string(char(0), char(1)); ) {
      cout << (int)i;
  }
#endif
  cout << endl;
  return 0;
}
