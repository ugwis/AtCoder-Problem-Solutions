#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[100];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	
	int ans = 4000000;
	for(int i=-100;i<=100;i++){
		int cost = 0;
		for(int j=0;j<n;j++){
			cost += pow(i-a[j],2);
		}
		ans = min(ans,cost);
	}
	cout << ans << endl;
	
	return 0;
}