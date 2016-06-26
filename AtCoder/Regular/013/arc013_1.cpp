#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m,l;
	int p,q,r;
	cin >> n >> m >> l;
	vector<int> a(3);
	for(int i=0;i<3;i++) cin >> a[i];
	sort(a.begin(),a.end());
	int ans = 0;
	do{
		ans = max(ans,(n/a[0])*(m/a[1])*(l/a[2]));
	}while(next_permutation(a.begin(),a.end()));
	cout << ans << endl;
	return 0;
}