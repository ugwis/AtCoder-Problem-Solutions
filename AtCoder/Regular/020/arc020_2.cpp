#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,c;
	int odd[11]={0},even[11]={0};
	cin >> n >> c;
	for(int i=0;i<n;i++){
		int a;
		cin >> a;
		if(i%2==0) even[a]++;
		else odd[a]++;
	}
	int ans=2*n;
	for(int i=0;i<11;i++){
		for(int j=0;j<11;j++){
			if(i == j) continue;
			ans = min(ans,n/2 - even[i] + n-n/2 - odd[j]);
		}
	}
	cout << ans*c << endl;
	return 0;
}