#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int t[4];
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> t[i];
	}
	int ans = 200;
	for(int i=0;i<pow(2,n);i++){
		int d = i;
		int ret[2] = {0,0};
		for(int i=0;i<n;i++){
			ret[d%2] += t[i];
			d/=2;
		}
		ans = min(ans,max(ret[0],ret[1]));
	}
	cout << ans << endl;
	return 0;
}