#include <bits/stdc++.h>
using namespace std;

bool b[100000];

int main(){
	int a[100000];
	int n,m;
	cin >> n >> m;
	for(int i=0;i<m;i++){
		cin >> a[i];
	}
	for(int i=m-1;i>=0;i--){
		if(!b[a[i]]){
			cout << a[i] << endl;
			b[a[i]] = true;
		}
	}
	for(int i=1;i<=n;i++){
		if(!b[i]){
			cout << i << endl;
		}
	}
	return 0;
}