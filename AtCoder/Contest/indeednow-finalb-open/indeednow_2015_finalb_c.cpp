#include <bits/stdc++.h>
#define pii pair<int,int>

using namespace std;

int main(){
	int n;cin >> n;
	string s;cin >> s;
	int c[5000];
	for(int i=0;i<n;i++){
		cin >> c[i];
	}
	vector<vector<int>> edge(n);
	for(int i=0;i<n;i++){
		int j=0;
		while(i-j >= 0 && i+j < n && s[i-j] == s[i+j]){
			edge[i-j].emplace_back(i+j+1);
			//cout << i-j << " > " << i+j+1 << endl;
			j++;
		}
		j=0;
		while(i-j-1 >= 0 && i+j < n && s[i-j-1] == s[i+j]){
			edge[i-j-1].emplace_back(i+j+1);
			//cout << i-j-1 << " > " << i+j+1 << endl;
			j++;
		}
	}
	priority_queue<pii,vector<pii>, greater<pii>> pq;
	vector<int> mini(n,numeric_limits<int>::max());
	pq.push(make_pair(0,0));
	while(!pq.empty()){
		auto x = pq.top();
		pq.pop();
		
		//cout << x.first << " " << x.second << endl;
		if(x.second == n){
			cout << x.first << endl;
			break;
		}
		for(int unsigned i = 0;i<edge[x.second].size();i++){
			int target = edge[x.second][i];
			//cout << target << ":" << x.second << ":" << c[target - x.second] << endl;
			if(x.first + c[target - x.second - 1] >= mini[target-1]){
				continue;
			}
			mini[target-1] = x.first + c[target - x.second - 1];
			pq.push(make_pair(x.first + c[target - x.second - 1],target));
		}
	}
	
	return 0;
}