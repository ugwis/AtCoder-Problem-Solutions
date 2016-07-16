#include <bits/stdc++.h>
#define lli long long int

using namespace std;

lli gcd(lli a, lli b){
	if(b==0) return a;
	if(a < b) swap(a,b);
	return gcd(b,a%b);
}

int main(){
	lli n,x;
	cin >> n >> x;
	cout << 3*(n-gcd(n,x)) << endl;
	return 0;
}

