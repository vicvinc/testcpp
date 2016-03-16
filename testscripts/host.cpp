#include <iostream>
#include <netdb.h>
#include <string>
#include <assert.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

using namespace std;

string getHostname()
{
   // if you change this, please #def old version for windows 
   char hostName[1024];
   int err =  gethostname( hostName, sizeof(hostName) );
   assert( err == 0 );
   
   struct hostent* hostEnt = gethostbyname( hostName );
   if ( !hostEnt )
   {
      // this can fail when there is no name server 
      // !cj! - need to decided what error to return 
      cout << "gethostbyname failed - name server is probably down" << endl;
      return "localhost";
   }
   assert( hostEnt );
   
   struct in_addr* addr = (struct in_addr*) hostEnt->h_addr_list[0];
   assert( addr );
   
   // if you change this, please #def old version for windows 
   char* addrA = inet_ntoa( *addr );
   string ret(addrA);

   string retHost( hostEnt->h_name );
      
   return retHost;
}
string getHostAddress()
{
   // if you change this, please #def old version for windows 
   char hostName[1024];
   int err =  gethostname( hostName, sizeof(hostName) );
   assert( err == 0 );
   
   struct hostent* hostEnt = gethostbyname( hostName );
   assert( hostEnt );
   
   struct in_addr* addr = (struct in_addr*) hostEnt->h_addr_list[0];
   assert( addr );
   
   // if you change this, please #def old version for windows 
   char* addrA = inet_ntoa( *addr );
   string ret(addrA);

   //Data retHost( hostEnt->h_name );
      
   return ret;
}
int main(int argc, const char *argv[])
{
  cout << getHostname() << "host address: " << getHostAddress() << endl;
  return 0;
}
