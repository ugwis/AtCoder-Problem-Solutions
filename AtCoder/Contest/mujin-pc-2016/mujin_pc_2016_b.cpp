#include <bits/stdc++.h>
using namespace std;

double circum(int r){
	return r*r*M_PI;
}

int main(){
	int a[3];
	cin >> a[0] >> a[1] >> a[2];
	sort(a,a+3);
	int large = a[0] + a[1] + a[2];
	int small = a[2] - a[1] - a[0];
	if(small < 0) small = 0;
	cout << setprecision(12);
	cout << circum(large) - circum(small) << endl;
	return 0;
}