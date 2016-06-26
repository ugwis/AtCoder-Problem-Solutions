#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m,t;
	cin >> n >> m >> t;
	bool flag[10001] = {0};
	for(int i=0;i<n;i++){
		int a;
		cin >> a;
		for(int j=a-m;j<a+m && j<t;j++){
			flag[j]=true;
		}
	}
	int ans = 0;
	for(int i=0;i<t;i++){
		if(!flag[i]) ans++;
	}
	cout << ans << endl;
	return 0;
}