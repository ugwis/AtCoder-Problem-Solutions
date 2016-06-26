#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,q;cin >> n >> q;
	vector<int> d(200001,0);
	for(int i=0;i<q;i++){
		int l,r;
		cin >> l >> r;
		d[l]++;
		d[r+1]--;
	}
	int s = 0;
	for(int i=1;i<=n;i++){
		s+=d[i];
		cout << s%2;
	}
	cout << endl;
	return 0;
}