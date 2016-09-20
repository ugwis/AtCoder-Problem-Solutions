#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	vector<char> ans;
	for(int unsigned i=0;i<s.size();i++){
		if(s[i] == 'B'){
			if(ans.size()) ans.pop_back();
			continue;
		}
		ans.emplace_back(s[i]);
	}
	for(int unsigned i=0;i<ans.size();i++){
		cout << ans[i];
	}
	cout << endl;
	
	return 0;
}