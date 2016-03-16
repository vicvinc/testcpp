#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <iterator>
#include <vector>
#include <sstream>

using namespace std;
    vector<string> splitstr(string s){
        istringstream iss(s);
        vector<string> ret;
        while(iss){
            string sub;
            getline(iss, sub, '.');
            ret.push_back(sub);
        }
        ret.pop_back();
        return ret;
    }
    int compareVersion(string s1, string s2) {
        vector<string> vs1 = splitstr(s1);
        vector<string> vs2 = splitstr(s2);
        int vsz1 = vs1.size();
        int vsz2 = vs2.size();
        int mivsz = min(vsz1, vsz2);
        int ret = 0;
        int i =0;
        string::size_type sz;
        for(; i < mivsz; ){
            int n1 = stoi(vs1[i], &sz);
            int n2 = stoi(vs2[i], &sz);
            if(n1 != n2){
                if(n1 > n2){
                    return 1;
                }
                else{
                    return -1;
                }
            }
        }
        if(i < vsz1){
            int n1 = istd:::stoi(vs1[i], &sz);
            if(n1 != 0){
                    return 1;
            }
        }
        if(i < vsz2){
            int n2 = std::stoi(vs2[i], &sz);
            if(n2 != 0){
                    return -1;
            }
        }
        return 0;
     }   
int main(int argc, const char *argv[])
{
	string a = "1.0";
	string b = "1.10";
	cout << "retsult: " << compareVersion(a, b) << endl;
	return 0;
}
