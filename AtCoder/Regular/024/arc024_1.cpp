#include <bits/stdc++.h>
using namespace std;

int main(){
	int l,r;
	cin >> l >> r;
	vector<int> ls(l),rs(r);
	for(int i=0;i<l;i++){
		cin >> ls[i];
	}
	for(int i=0;i<r;i++){
		cin >> rs[i];
	}

	sort(ls.begin(),ls.end());
	sort(rs.begin(),rs.end());

	int li = 0;
	int ri = 0;
	int ans = 0;
	while(li < l && ri < r){
		if(ls[li] == rs[ri]){
			ans++;
			li++;
			ri++;
		}
		if(ls[li] < rs[ri]){
			li++;
		}
		if(ls[li] > rs[ri]){
			ri++;
		}
	}
	cout << ans << endl;
	return 0;
}