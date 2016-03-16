#include <iostream>
#include <string>
using namespace std;
int titleToNumber(string s) {
        int ret = 0;
        int sz = s.size();
        for(int i=0; i<sz-1; i++){
            int cur = s[i] - 'A' + 1;
		cur *= 26;
		ret += cur;
		cout << "cur:" << cur << endl;
        }
	ret = ret + s[sz-1]-'A'+1;
        return ret;
    }
int main(int argc, const char*argv[])
{
	string a = "AA";
	cout <<"return :" <<  titleToNumber(a) << endl;
	return 0;
}
