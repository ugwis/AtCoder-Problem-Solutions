#include <bits/stdc++.h>
#define LIM 2000000000000
using namespace std;
 
int main(){
	long long int a,k;
	cin >> a >> k;
	long long int ans = 0;
	if(k > 0){
		while(a < LIM){
			a += 1 + k*a;
			ans++;
		}
	} else {
		ans = LIM - a;
	}
	cout << ans << endl;
	
	return 0;
}