#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,k;
	cin >> n >> k;
	int p = 0;
	vector<long long int> a(n+1,0);
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	for(int i=2;i<=n;i++){
		a[i] += a[i-1];
	}
	long long int sum = 0;
	for(int i=k;i<=n;i++){
		sum += a[i] - a[i-k];
	}
	cout << sum << endl;
	return 0;
}