#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main (int argc, const char *argv[])
{
  typedef unsigned long long IntCallId;
  IntCallId dId = 117, fId = 120, iId = 1;
  IntCallId mask = (dId << 7 * 8) + (fId << 6 * 8) + (iId << 5 * 8);
  IntCallId maxCallId = mask | 0x00000000ffffffff;
  cout << maxCallId << endl;
  cout << mask << endl;
  return 0;
}
