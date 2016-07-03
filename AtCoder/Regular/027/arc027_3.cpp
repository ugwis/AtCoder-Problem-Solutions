#include <bits/stdc++.h>

#define substmax(a,n) a=max(a,n)

using namespace std;

int main(){
	int x,y,n;
	cin >> x >> y >> n;
	long long int dp[301][301];
	for(int i=0;i<301;i++) for(int j=0;j<301;j++) dp[i][j] = -1;
	dp[x][y]=0;
	long long int ans=0;
	for(int i=0;i<n;i++){
		int t,h;
		cin >> t >> h;
		for(int cy=0;cy<=y;cy++){
			for(int cx=0;cx<=x;cx++){
				if(dp[cx][cy] == -1) continue;
				int dx = max(1,t-cy);
				int dy = t-dx;
				if(cx < dx || cy < dy) continue;
				substmax(dp[cx-dx][cy-dy],dp[cx][cy]+h);
				substmax(ans,dp[cx-dx][cy-dy]);
			}
		}
	}
	cout << ans << endl;
	return 0;
}