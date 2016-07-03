#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	for(int unsigned i = 0;i<s.size();i++){
		if(isdigit(s[i])){
			cout << s[i];
		}
	}
	cout << endl;
	return 0;
}