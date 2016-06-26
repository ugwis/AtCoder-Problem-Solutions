#include <bits/stdc++.h>
#define lli long long int 
lli MOD = 1000000007;

using namespace std;
 
vector<vector<int>> v(100001);
 
pair<lli,lli> dfs(int s,int p){
	//white black
	pair<lli,lli> res(1,1);
	for(int unsigned i=0;i<v[s].size();i++){
		if(p == v[s][i]) continue;
		pair<lli,lli> x = dfs(v[s][i],s);
		res.first *= x.first + x.second;
		res.first%=MOD;
		res.second *= x.first;
		res.second%=MOD;
	}
//	cout << s << " " << res.first << " " << res.second << endl;
	return res;
}
 
int main(){
	int n;cin >> n;
	for(int i=0;i<n-1;i++){
		int a,b;
		cin >> a >> b;
		v[a].emplace_back(b);
		v[b].emplace_back(a);
	}
	pair<lli,lli> result = dfs(1,-1);
	cout << (result.first + result.second)%MOD << endl;
	return 0;
}