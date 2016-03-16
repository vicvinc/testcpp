#include <iostream>
#include <stdio.h>

#pragma pack(2)

using namespace std;

class t1{
public:
  int a;
  int foo(){ return a; }
  int bar(){ return b; }
  void far( int x ){ b = x; }
private:
  int b;
};
class t2{
public:
  void far(int x){ a = x; }
private:
  char a;
};
class t3: public t1{};
class t4{
  int a,b;
public:
  void foo(){ a = 1;b = 2; }
  int bar(){ return a+b; }
}
int main(int argc, const char *argv[])
{
  t4 t;
  t.a = 1;
  t.b = 3;
  cout<< t.bar()<<endl;
  return 0;
}
