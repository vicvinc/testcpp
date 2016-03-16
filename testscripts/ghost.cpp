#include <iostream>
#include <stdlib.h>

#include <netdb.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string>

using namespace std;

int main(int argc, const char *argv[])
{
  char *str = "127.0.0.1";
  string mLocalHostAddr;
  //mLocalHostAddr = "localhost";
  cout << "host name : " << endl;
  getline(cin,mLocalHostAddr);
  //cin >> mLocalHostAddr;
  struct hostent* tmpHostEnt = gethostbyname( mLocalHostAddr.c_str() );
  if(!tmpHostEnt){
    cout << "gethostbyname failed, HostAddr use default setting[HostAddr: ] " << mLocalHostAddr << endl;
    return -1;
  }else{
    struct in_addr* tmpLocalHostAddrr = (struct in_addr*)tmpHostEnt->h_addr_list[0];
    mLocalHostAddr = inet_ntoa( *tmpLocalHostAddrr );
    cout << "gethostbuname success,HostAddr is " << mLocalHostAddr << endl;
  }
  return 0;
}
