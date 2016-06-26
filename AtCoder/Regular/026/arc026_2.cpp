#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ll n;
	cin >> n;
	if(n == 1){
		cout << "Deficient" << endl;
		return 0;
	}
	ll sum=1;
	for(ll i=2;i<=sqrt(n);i++){
		if(n%i==0){
			if(i*i==n) sum+=i;
			else sum+=i+n/i;
		}
	}
	if(sum < n){
		cout << "Deficient" << endl;
	} else if(sum == n){
		cout << "Perfect" << endl;
	} else {
		cout << "Abundant" << endl;
	}
	return 0;
}