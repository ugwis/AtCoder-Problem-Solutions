#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<pair<int,string>> v;
	int psum=0;
	for(int i=0;i<n;i++){
		string s;
		int p;
		cin >> s >> p;
		v.emplace_back(make_pair(p,s));
		psum += p;
	}
	sort(v.begin(),v.end());
	if(v[n-1].first > psum/2){
		cout << v[n-1].second << endl;
	} else {
		cout << "atcoder" << endl;
	}
	return 0;
}