#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	string s;
	cin >> s;
	long long int k;
	cin >> k;
	string ans;
	for(int unsigned i=0;i<s.size();i++){
		if(s[i] != 'a' && k >= 'z' - s[i] + 1){
			k -= 'z' - s[i] + 1;
			ans += "a";
		} else {
			ans += s[i];
		}
	}
	if(k > 0){
		long long int la = ans[ans.size()-1] - 'a' + k;
		la%=26;
		ans[ans.size()-1] = (char)(la + 'a');
	}
	cout << ans << endl;
	return 0;
}