#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;cin >> n;
	int c=0;
	for(int unsigned i = 0;i<n;i++){
		string s;
		cin >> s;
		if(s == "A") c++;
		if(s == "Un") c--;
		if(c < 0){
			cout << "NO" << endl;
			return 0;
		}
	}
	if(c==0) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}