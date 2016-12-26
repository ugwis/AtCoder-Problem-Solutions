#include <bits/stdc++.h>
 
using namespace std;
 
void show(vector<int> a){
	for(int unsigned i=0;i<a.size();i++){
		cout << a[i] << " ";
	}
	cout << endl;
}
 
int main(){
	int n,x;
	cin >> n >> x;
	vector<int> a(n),c(n);
	for(int i=0;i<n;i++){
		cin >> a[i];
		c[i] = a[i];
	}
	for(int i = 1; i < n; i++){
		int b = a[i] + a[i-1];
		if(b > x){
			int d = b - x;
			int di = min(a[i], d);
			a[i] = a[i] - di;
			int dim = min(a[i-1], d - di);
			a[i-1] = a[i-1] - dim;
		}
	}
	long long int ans = 0;
	for(int i=0;i<n;i++){
		ans += c[i] - a[i];
	}
	cout << ans << endl;
	
	return 0;
}