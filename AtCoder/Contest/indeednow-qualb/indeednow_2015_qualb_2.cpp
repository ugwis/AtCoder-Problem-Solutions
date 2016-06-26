#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	string s;
	string t;
	cin >> s;
	cin >> t;
	int i=0;
	t=t+t;
	int ret=-1;
	for(int i=0;i<s.size();i++){
		if(s == t.substr(i,s.size())){
			ret = i;
			break;
		}
	}
	cout << ret << endl;
	
	return 0;
}