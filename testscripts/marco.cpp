#include <iostream>

using namespace std;
#define boo(x) ( ( (x)>5 && (x)<10 ) ? x : 0 )
int main(int argc, const char *argv[])
{
  int a;
  //cout<< "1++" << 1++ <<endl;
  a = 4;
  cout <<"4 "<< boo(++a) << endl;
  cout << "a " << a << endl;
  a = 5;
  cout <<"5 "<< boo(++a) << endl;
  cout << "a " << a << endl;
  a = 6;
  cout <<"6 "<< boo(++a) << endl;
  cout << "a " << a << endl;
  a = 11;
  cout <<"11 "<< boo(++a) << endl;
  cout << "a " << a << endl;
  return 0;
}
