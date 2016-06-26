#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	string s;cin >> s;
	int t;cin >> t;
	int x=0,y=0,q=0;
	for(int unsigned i = 0;i<s.size();i++){
		if(s[i] == 'L') x++;
		if(s[i] == 'R') x--;
		if(s[i] == 'U') y++;
		if(s[i] == 'D') y--;
		if(s[i] == '?') q++;
	}
	if(t==1) cout << abs(x) + abs(y) + q << endl;
	if(t==2){
		int ret = abs(x) + abs(y);
		cout << max((ret + q)%2,ret - q) << endl;
	}
	return 0;
}