#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<pair<int,int>> v(n);
	for(int i=0;i<n;i++){
		v[i] = make_pair(0,i);
		cin >> v[i].first;
	}
	sort(v.rbegin(),v.rend());
	for(int unsigned i=0;i<v.size();i++){
		cout << v[i].second+1 << endl;
	}
	
	return 0;
}