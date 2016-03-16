#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(int argc, const char *argv[])
{
  int m,n;
  int *lst = new int(n);
  for (int i=0,ii=n; i<ii; i++) {
    lst[i]=i+1;
  }
  cin >> m >> n;
  int nn=n;
  while (nn!=1) {
    if (nn>=m) {
      lst[nn%m]=0;
    } else {
      lst[m%nn]=0;
    }
    nn--;
  }

}
