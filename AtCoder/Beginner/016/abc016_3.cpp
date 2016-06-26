#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m; cin >> n >> m;
	vector<vector<int>> rel(n+1);
	for(int i=0;i<m;i++){
		int a,b;
		cin >> a >> b;
		rel[a].emplace_back(b);
		rel[b].emplace_back(a);
	}
	for(int i=1;i<n+1;i++){
		bool f[11];
		for(int j=0;j<11;j++) f[j]=false;
		f[i] = true;
		int ans = 0;
		for(int unsigned j=0;j<rel[i].size();j++){
			f[rel[i][j]]=true;
		}
		for(int unsigned j=0;j<rel[i].size();j++){
			for(int unsigned k=0;k<rel[rel[i][j]].size();k++){
				if(!f[rel[rel[i][j]][k]]) ans++;
				f[rel[rel[i][j]][k]] = true;
			}
		}
		cout << ans << endl;
	}
	return 0;
}