#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,q;
	cin >> n >> q;
	vector<int> v(n,0);
	for(int i=0;i<q;i++){
		int l,r,t;
		cin >> l >> r >> t;
		for(int j=l-1;j<r;j++){
			v[j] = t;
		}
	}
	for(int i=0;i<n;i++){
		cout << v[i] << endl;
	}
	
	return 0;
}