#include <stdlib.h>
#include <iostream>

using namespace std;
int foo(){
  static int i;
  return ++i;
}
int main( int argc, const char *argv[] )
{
  cout << "out:: " << foo() << endl;
  foo();
  cout << "out:: " << foo() << endl;
  return 0;

}
