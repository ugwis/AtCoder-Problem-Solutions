#include <iostream>
#include <algorithm>

using namespace std;
 
int main(){
	int n;
	int r[3000];
	int dp[3000][2];
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> r[i];
	}
	for(int i=0;i<n;i++){
		dp[i][0] = dp[i][1] = 1;
		for(int j=0;j<i;j++){
			if(r[j] < r[i]) dp[i][0] = max(dp[i][0], dp[j][1] + 1);
			if(r[j] > r[i]) dp[i][1] = max(dp[i][1], dp[j][0] + 1);
		}
	}
	int ans = max(dp[n-1][0],dp[n-1][1]);
	if(ans < 3) ans = 0;
	cout << ans << endl;
	return 0;
}
