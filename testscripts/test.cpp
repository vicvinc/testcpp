#include <cstdlib>
#include <iostream>
#include <set>
#include <string>
using namespace std;

#if 0
int fun(set<string> &s, ...) {
	//cout << "s:" << s << "ss: " << ss << "sss: " << sss << endl;
	//cout << "s:" << s << endl;
	cout << "fun0" << endl;
	for(set<string>::const_iterator it = s.begin(); it != s.end(); it++) {
		cout << *it << endl;
	}
	return 0;
}
#endif
int fun(set<string> &s) {
	cout << "fun1" << endl;
	//cout << "s:" << s << "ss: " << ss << "sss: " << sss << endl;
	//cout << "s:" << s << endl;
	for(set<string>::const_iterator it = s.begin(); it != s.end(); it++) {
		cout << *it << endl;
	}
	return 0;
}
int fun(unsigned char s, unsigned char ss, unsigned char sss) {
	cout << "fun2" << endl; 
	cout << "s:" << s << "ss: " << ss << "sss: " << sss << endl;
	return 0;
}
int main ()
{
	set<string> d;
	  d.insert("11");
	  d.insert("22");
	  d.insert("33");
	//cout << "string set " << d;
	unsigned int c = 0, f = 0;
	fun(d, c, f);
	fun(d);
  	return 0;
}
