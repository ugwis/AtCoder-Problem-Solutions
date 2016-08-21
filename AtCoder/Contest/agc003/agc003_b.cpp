#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	lli ans = 0;
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			if(a[i] >= 2){
				ans += max(a[i]/2-1,0);
				a[i] = 2;
			}
		} else {
			ans += a[i]/2;
			a[i] = 1;
		}
	}
	for(int i=0;i<n;i++){
		if(a[i] == 2){
			a[i]-=2;
			ans++;
		} else if(a[i] == 1){
			if(i+1<n && a[i+1] >= 1){
				a[i]--;
				a[i+1]--;
				ans++;
			}
		}
	}
	cout << ans << endl;
	
	return 0;
}