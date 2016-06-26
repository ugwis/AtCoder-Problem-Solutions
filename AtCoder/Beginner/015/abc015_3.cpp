#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	int t[5][5];
	cin >> n >> k;
	for(int i=0;i<n;i++){
		for(int j=0;j<k;j++){
			cin >> t[i][j];
		}
	}
	for(int i = 0;i < pow(k,n);i++){
		int d = i;
		int ans = t[0][d%k];
		d/=k;
		for(int j = 1;j < n;j++){
			ans^=t[j][d%k];
			d/=k;
		}
		if(ans == 0){
			cout << "Found" << endl;
			return 0;
		}
	}
	cout << "Nothing" << endl;
	return 0;
}