#include <iostream>
//#include <template>
using namespace std;
//typedef int Type;
template<typename T>
int compare(T &a, T &b){
  return a>=b?1:-1;
}
int main(int argc, const char *argv[])
{
  cout << "env ok" << endl;
  int a = 1, b=2;
  cout << compare(a, b) << endl;
  return 0;
}
