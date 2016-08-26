#include <bits/stdc++.h>
#define lli long long int
using namespace std;
 
int main(){
	int n;
	cin >> n;
	int a[2][50001];
	for(int i=0;i<n;i++){
		cin >> a[i%2][i/2];
	}
	sort(a[0], a[0] + n/2 + n%2);
	sort(a[1], a[1] + n/2);
 
	map<int,int> mp;
	int d[100001];
	for(int i=0;i<n;i++){
		d[i] = a[i%2][i/2];
		mp[d[i]] = i;
	}
	sort(d,d + n);
	lli ans = 0;
	for(int i=0;i<n;i++){
		ans+=abs(mp[d[i]] - i)%2;
	}
	cout << ans/2 << endl;
 
	return 0;
}