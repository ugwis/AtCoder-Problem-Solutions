#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,c=0;
	string ans;
	cin >> n;
	vector<string> v;
	for(int i=0;i<n;i++){
		string s;
		cin >> s;
		v.push_back(s);
		if(c < count(v.begin(),v.end(),s)){
			ans = s;
			c = count(v.begin(),v.end(),s);
		}
	}
	cout << ans << endl;
}