#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    string s("Somewhere down the road");
    istringstream iss(s);
    stringstream ss;
    vector<string> words;
    while(iss){
	string sub;
	iss >> sub;
	words.push_back(sub);
        cout << "Substring: " << sub << endl;
    }
#if 0
    do
    {
        string sub;
        iss >> sub;
    	words.push_back(sub);
        cout << "Substring: " << sub << endl;
    } while (iss);
#endif
#if 1
    words.pop_back();
    reverse(words.begin(), words.end());//words.reverse();
    vector<string>::iterator itr;
    for(itr = words.begin(); itr!=words.end(); ++itr){
      	cout << "words: " << *itr << endl;
	if(itr != words.begin()){
		ss << " ";
	}
	ss << *itr;
	
    }
    cout << "ss: " << ss.str() << endl;
#endif
    return 0;
}
