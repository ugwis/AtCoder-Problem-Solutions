#include <bits/stdc++.h>
#define lli long long int

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> v(2*n);
	for(int i=0;i<2*n;i++){
		cin >> v[i];
	}
	sort(v.begin(),v.end());
	int ans = 0;
	for(int i=0;i<n;i++){
		ans += v[i*2];
	}
	cout << ans << endl;
	return 0;
}

