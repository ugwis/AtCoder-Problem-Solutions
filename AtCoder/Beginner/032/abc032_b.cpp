#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	int k;
	set<string> m;
	cin >> s;
	cin >> k;
	if(s.size()<k){
		cout << 0 << endl;
		return 0;
	}
	for(int unsigned i = 0;i<=s.size()-k;i++){
		m.insert(s.substr(i,k));
	}
	cout << m.size() << endl;
	
	return 0;
}