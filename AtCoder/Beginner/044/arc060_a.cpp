#include <bits/stdc++.h>

using namespace std;

long long int dp[2501][52];

int main(){
	int n,a;
	cin >> n >> a;
	for(int i=0;i<n;i++){
		int x;
		cin >> x;
		for(int j=2500-x;j>=0;j--){
			for(int k=51;k>0;k--){
				if(dp[j][k-1]){
					dp[j+x][k] += dp[j][k-1];
				}
			}
		}
		dp[x][1]++;
	}
	long long int ans = 0;
	for(int i=1;i<=n;i++){
		//cout << i*a << " " << dp[i*a][i] << endl;
		ans+=dp[i*a][i];
	}
	cout << ans << endl;
}