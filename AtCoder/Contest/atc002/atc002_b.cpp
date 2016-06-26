#include <bits/stdc++.h>

#define lli long long int
using namespace std;

lli mod_pow(lli n,lli k,lli m){
	if(k == 0) return 1;
	else if(k%2) return mod_pow(n,k-1,m)*n%m;
	else{
		lli t = mod_pow(n,k/2,m);
		return t*t%m;
	}
}

int main(){
	lli n,m,p;
	cin >> n >> m >> p;
	cout << mod_pow(n,p,m) << endl;
	return 0;
}