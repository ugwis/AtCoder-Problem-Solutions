#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[100000];
	for(int i=0;i<n;i++){
		cin >> a[i];
		a[i]--;
	}
	int ans = 0;
	for(int i=0;i<n;i++){
		if(i == a[a[i]]) ans++;
	}
	cout << ans/2 << endl;
	
	return 0;
}