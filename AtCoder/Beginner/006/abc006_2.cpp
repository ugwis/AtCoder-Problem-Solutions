#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	int a[1000001] = {0};
	a[3] = 1;
	cin >> n;
	for(int i=4;i<1000001;i++){
		a[i] = (a[i-1] + a[i-2] + a[i-3])%10007;
	}
	cout << a[n] << endl;
	return 0;
}