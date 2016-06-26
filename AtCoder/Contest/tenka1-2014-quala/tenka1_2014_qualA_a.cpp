#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<string> v;
	for(int i=1;i<=1000;i++){
		v.emplace_back(to_string(i));
	}
	sort(v.begin(),v.end());
	for(int unsigned i=0;i<v.size();i++){
		cout << v[i] << endl;
	}
	return 0;
}