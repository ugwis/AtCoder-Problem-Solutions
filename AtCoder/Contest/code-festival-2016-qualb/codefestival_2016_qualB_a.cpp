#include <bits/stdc++.h>

using namespace std;

int main(){
	string n;
	cin >> n;
	string s("CODEFESTIVAL2016");
	int cnt=0;
	for(int unsigned i=0;i<n.size();i++){
		if(s[i] != n[i]) cnt++;
	}
	cout << cnt << endl;
	
	return 0;
}