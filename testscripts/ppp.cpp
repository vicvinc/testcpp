#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

class A {
public:
  bool setA( int x ){ 
   if(x) {
     a = x; 
     return true;
   }
   else 
    return false;
  }
  int getA( ) {
    return a;
  }
private:
  int a;

};
class B: public A {
public:
  int getB( ) {
    return b;
  }
  bool setB( ) {
    b = getA();
    return true;
  }
private:
  int b;
};
int main(int argc, const char *argv[])
{
  A a;
  B b;
  cout<< "setA 1 " << a.setA(1) << endl;
  cout<< "getA 1 " << a.getA() << endl;
  cout<< "setB A " << b.setB() << endl;
  cout<< "getB " << b.getB() << endl;
  cout<< "B.a " << b.getA() << endl;
  cout<< "setB.a 1 " << b.setA(1) << endl;
  cout<< "B.a " << b.getA() << endl;
  return 0;
}
