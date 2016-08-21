#include <bits/stdc++.h>

#define SIZE 300002

using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	vector<pair<int,int>> v;
	int d[SIZE] = {0};
	for(int i=0;i<m;i++){
		int s,t;
		cin >> s >> t;
		d[s]++;
		d[t+1]--;
		v.emplace_back(make_pair(s,t));
	}
	for(int i=1;i<SIZE;i++){
		d[i] += d[i-1];
	}
	int k[SIZE];
	int prev = -1;
	for(int i=0;i<SIZE;i++){
		if(d[i] == 1) prev=i;
		k[i] = prev;
	}
	vector<int> ans;
	for(int unsigned i=0;i<v.size();i++){
		if(v[i].first > k[v[i].second]){
			ans.emplace_back(i+1);
		}
	}
	cout << ans.size() << endl;
	for(int unsigned i=0;i<ans.size();i++){
		cout << ans[i] << endl;
	}
	
	return 0;
}