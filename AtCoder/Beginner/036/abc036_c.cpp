#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;cin >> n;
	vector<int> a(n);
	vector<int> b(n);
	for(int i=0;i<n;i++){
		cin >> a[i];
		b[i] = a[i];
	}
	sort(b.begin(),b.end());

	int p = -1;
	int c = 0;
	map<int,int> m;
	for(int unsigned i = 0;i < n;i++){
		if(b[i] == p) continue;
		m[b[i]] = c;
		c++;
		p = b[i];
	}
	
	for(int i=0;i<n;i++){
		cout << m[a[i]] << endl;
	}
	return 0;
}