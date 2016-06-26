#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	int a[4];
	cin >> s;
	for(int i=0;i<4;i++){
		cin >> a[i];
	}
	for(int unsigned i = 0;i<=s.size();i++){
		for(int j=0;j<4;j++){
			if(i == a[j]) cout << "\"";
		}
		if(i<s.size()) cout << s[i];
	}
	cout << endl;
	
	return 0;
}