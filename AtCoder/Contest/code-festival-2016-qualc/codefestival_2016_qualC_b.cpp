#include <bits/stdc++.h>

using namespace std;

int main(){
	int k,t;
	cin >> k >> t;
	int ma = 0;
	for(int i=0;i<t;i++){
		int a;cin >> a;
		ma = max(ma,a);
	}
	cout << max(2*ma-k-1,0) << endl;
	
	return 0;
}