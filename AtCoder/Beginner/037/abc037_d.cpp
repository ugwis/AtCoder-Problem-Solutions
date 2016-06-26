#include <bits/stdc++.h>
#define lli long long int
using namespace std;

lli dp[1000][1000];

int a[1000][1000];

int d[5] = {0,-1,0,1,0};

int h,w;

lli dfs(int x,int y){
	if(dp[y][x] != -1) return dp[y][x];
	lli ret = 1;
	for(int i=0;i<5;i++){
		if(x+d[i] < 0) continue;
		if(y+d[i+1] < 0) continue;
		if(x+d[i] >= w) continue;
		if(y+d[i+1] >= h) continue;
		if(a[y+d[i+1]][x+d[i]] <= a[y][x]) continue;
		ret+=dfs(x+d[i],y+d[i+1]);
	}
	return dp[y][x] = ret%1000000007;
}

int main(){
	for(int i=0;i<1000;i++){
		for(int j=0;j<1000;j++){
			dp[i][j] = -1;
		}
	}
	cin >> h >> w;
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			cin >> a[i][j];
		}
	}
	lli ans = 0;
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			ans += dfs(j,i);
		}
	}
	cout << ans%1000000007 << endl;
	return 0;
}