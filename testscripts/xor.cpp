#include <iostream>

using namespace std;

    void reverse(int* a, int* b)
    {
        while (--b > a) {
           cout<< "befor *b: " << *b << endl;
            *b ^= *a;
           cout<< "after *b: " << *b << endl;
            *a ^= *b;
           cout<< "*a: " << *a << endl;
            *b ^= *a;
           cout<< "*b: " << *b << endl;
            ++a;
        }
    }
    
    void rotate(int arr[], int n, int k)
    {
        int p = k%n;
        reverse(arr, arr+n);
        reverse(arr, arr+p);
        reverse(arr+p, arr+n);
    }

int main(int argc, const char *argv[])
{
  int a[7] = {1,2,3,4,5,6,7};
#if 0
  rotate(a,7,3);
  for(int i=0; i<7; i++){
    cout << a[i] << endl;
  }
#endif
  int x = 7,y=1;
  x^=y;
  cout << "x^=y " << x << endl;
  y^=x;
  cout << "y^=x " << y << endl;
  x^=y;
  cout << "x^=y " << x << endl;
  

  return 0;


}
