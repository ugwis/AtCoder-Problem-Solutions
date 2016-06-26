#include <bits/stdc++.h>
using namespace std;
int main(){
	int w;cin >> w;
	int n,k;cin >> n >> k;
	int dp[10001][51] = {0};
	dp[0][0] = 1;
	for(int i=0;i<n;i++){
		int a,b;
		cin >> a >> b;
		for(int j=w-a;j>=0;j--){
			for(int k=i;k>=0;k--){
				if(dp[j][k]){
					dp[j+a][k+1] = max(dp[j+a][k+1],dp[j][k] + b);
				}
			}
		}
	}
	int ans = 0;
	for(int i=0;i<=w;i++){
		for(int j=0;j<=k;j++){
			ans = max(ans,dp[i][j]-1);
		}
	}
	cout << ans << endl;
	return 0;
}