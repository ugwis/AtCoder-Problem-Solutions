#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;cin >> n;
	vector<string> v;
	for(int i = 0;i<n;i++){
		string str;
		cin >> str;
		v.emplace_back(str);
	}
	int ans=0;
	for(int i=0;i<9;i++){
		for(int j=0;j<n;j++){
			if(v[j][i] == 'x') ans++;
			if(v[j][i] == 'o'){
				if(j>0 && v[j-1][i] != 'o'){
					ans++;
				}
				if(j == 0){
					ans++;
				}
			}
		}
	}
	cout << ans << endl;
	return 0;
}