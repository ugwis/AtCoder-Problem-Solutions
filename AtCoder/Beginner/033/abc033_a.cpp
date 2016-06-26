#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	for(int unsigned i=0;i<s.size()-1;i++){
		if(s[i] != s[i+1]){
			cout << "DIFFERENT" << endl;
			return 0;
		}
	}
	cout << "SAME" << endl;
	return 0;
}