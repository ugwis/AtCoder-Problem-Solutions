#include <bits/stdc++.h>
using namespace std;
int main(){
	int r,c,k; cin >> r >> c >> k;
	int n; cin >> n;
	vector<int> rows(r+1,0);
	vector<int> cows(c+1,0);
	vector<pair<int,int>> drops;
	for(int i=0;i<n;i++){
		int ri,ci;
		cin >> ri >> ci;
		drops.emplace_back(make_pair(ri,ci));
		rows[ri]++;
		cows[ci]++;
	}
	vector<int> count_rows(k+1,0);
	vector<int> count_cows(k+1,0);
	for(int i=1;i<r+1;i++){
		if(rows[i] > k+1) continue;
		count_rows[rows[i]]++;
	}
	for(int i=1;i<c+1;i++){
		if(cows[i] > k+1) continue;
		count_cows[cows[i]]++;
	}
	long long int ans = 0;
	for(int i=0;i<k+1;i++){
		ans+=count_rows[i]*count_cows[k-i];
	}
	
	for(int unsigned i = 0;i<drops.size();i++){
		int x = rows[drops[i].first] + cows[drops[i].second];
		if(x == k) ans--;
		if(x == k+1) ans++;
	}
	cout << ans << endl;
	return 0;
}