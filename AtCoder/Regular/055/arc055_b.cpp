#include <bits/stdc++.h>

using namespace std;

double dp[1010][1010][2];

int main(){
	int n,K;
	cin >> n >> K;
	for(int i=0;i<=K;i++) dp[n][i][0] = 0.0;
	for(int i=0;i<=K;i++) dp[n][i][1] = 1.0;
	
	for(int i=n-1;i>=0;i--){
		for(int j=0;j<=K;j++){
			for(int k=0;k<2;k++){
				double p = 1.0/(i + 1.0);
				dp[i][j][k] = (1.0 - p)*dp[i+1][j][k]
							+p*max(dp[i+1][j+1][1],dp[i+1][j][0]);
			}
		}
	}
	cout << setprecision(12);
	cout << dp[0][0][0] << endl;
	
	return 0;
}