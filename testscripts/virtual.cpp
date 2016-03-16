#include <stdio.h>
#include <stdlib.h>
#include <map>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
	map<string,int> numLst;
	map<string,int>::iterator numItor;
	
	for(int i=0; i<10; i++){
		//char *tmp = itoa(i);
		//string str = string(tmp);
		numLst[to_string(i)] = i;
#if 0
		stringstream str;
		str << i;
		string str_  = str.str();
		numLst[str_] = i;
#endif
		//cout<<str_<<endl;
		//continue;
		//string str;
		//sprintf(str,"%l",i);
	}
	for(numItor = numLst.begin();numItor!=numLst.end();numItor++){
		cout<<"string "<<numItor->first<<"int "<<numItor->second<<endl;
	}
	return 0;
}
