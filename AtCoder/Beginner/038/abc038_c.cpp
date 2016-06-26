#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,a,b;
	cin >> n;
	long long int k = 1 ,ans = 1;
	cin >> a;
	for(int i=1;i<n;i++){
		cin >> b;
		if(a < b) k++;
		else k=1;
		ans += k;
		a = b;
	}
	cout << ans << endl;
	
	return 0;
}