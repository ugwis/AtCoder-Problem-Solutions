#include <bits/stdc++.h>

using namespace std;

int main(){
	string s("WBWBWWBWBWBWWBWBWWBWBWBWWBWBWWBWBWBWWBWBWWBWBWBW");
	vector<string> v{"Do","","Re","","Mi","Fa","","So","","La","","Si"};
	string str;
	cin >> str;
	for(int unsigned i=0;i<s.size()-str.size();i++){
		//cout << s.substr(i,str.size()) << " " << str << endl;
		if(s.substr(i,str.size()) == str){
			cout << v[i] << endl;
			break;
		}
	}
	return 0;
}