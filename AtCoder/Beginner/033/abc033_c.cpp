#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	int ans = 0;
	bool used0 = false;
	for(int unsigned i = 0;i < s.size();i++){
		if(s[i] == '0'){
			used0 = true;
		}
		if(s[i] == '+'){
			if(!used0){
				ans++;
			}
			used0 = false;
		}
	}
	if(!used0) ans++;
	cout << ans << endl;
	return 0;
}