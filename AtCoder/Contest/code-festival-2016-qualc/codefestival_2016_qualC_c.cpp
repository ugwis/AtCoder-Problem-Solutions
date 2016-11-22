#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<long long int> t(n);
	vector<long long int> a(n);
	
	vector<long long int> c(n,-1);
	vector<long long int> num(n);

	for(int i=0;i<n;i++){
		cin >> t[i];
	}
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	
	long long int maxi = 0;
	long long int p=-1;
	for(int i=0;i<n;i++){
		if(p != t[i]){
			c[i] = 1;
			num[i] = t[i];
		}
		p=t[i];
		maxi = max(maxi,t[i]);
	}
	
	long long int maxi2 = 0;
	p=-1;
	for(int i=n-1;i>=0;i--){
		if(p != a[i]){
			if(c[i] != -1 && a[i] != num[i]){
				cout << 0 << endl;
				return 0;
			}
			c[i] = 1;
			num[i] = a[i];
		}
		p=a[i];
		maxi2 = max(maxi2,a[i]);
	}
	
	if(maxi != maxi2){
		cout << 0 << endl;
		return 0;
	}
	
	for(int i=0;i<n;i++){
		if(c[i] != -1) continue;
		c[i] = min(t[i], a[i])%1000000007;
	}
	
	for(int i=0;i<n;i++){
		if(num[i] > t[i]){
			cout << 0 << endl;
			return 0;
		}
	}
	
	for(int i=n-1;i>=0;i--){
		if(num[i] > a[i]){
			cout << 0 << endl;
			return 0;
		}
	}
	
	
	unsigned long long int ans = 1;
	for(int i=0;i<n;i++){
		ans%=1000000007;
		ans*=c[i];
		ans%=1000000007;
	}
	
	cout << ans << endl;
	
	return 0;
}