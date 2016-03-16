#include <iostream>

using namespace std;

int main(int argc,const char* argv[])
{
  int instance = 3, mask = 8;

  int instanceId[8] = {3,4,10,11,12,16};
  for(int i=0; i<6; i++){
    if((instanceId[i]&mask) != instanceId[i]){
      cout << "i&m: " << (instanceId[i]&mask) << "instanceId: " << instanceId[i] << endl;
    }
    else{
      cout << instanceId[i] << endl;
    }
  }

  return 1;
}
