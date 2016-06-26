#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<string> v(n);
	for(int i=0;i<n;i++){
		cin >> v[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout << v[n-j-1][i];
		}
		cout << endl;
	}
	
	return 0;
}