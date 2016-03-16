#include <iostream>
#include <assert.h>

using namespace std;
class B{
public:
 int foo(){return 2;}
};
class A{

public:
 int foo(){return 1;}
 B* boo(){return b;}
private:
 B* b;
};


int main(int argc, const char* argv[])
{
 A *a = 0;
 assert(true);
 cout << a->foo() << endl;
 //cout << a->boo()->foo() << endl;
 return 0;
}
