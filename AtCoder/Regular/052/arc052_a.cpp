#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	string num;
	for(int unsigned i = 0;i<s.size();i++){
		if(isdigit(s[i])){
			num+=s[i];
		}
	}
	cout << stoi(num) << endl;
	return 0;
}
