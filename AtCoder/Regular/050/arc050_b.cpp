#include <bits/stdc++.h>
#define lli long long int
using namespace std;
 
int main(){
	lli R,B,x,y;
	cin >> R >> B >> x >> y;
	lli l = 0, K, r = R+1;
	while(l < r-1){
		K = (l+r)/2;
		lli k = (R - K)/(x - 1) + (B - K)/(y - 1);
		if(k >= K && K <= B){
			l = K;
		} else {
			r = K;
		}
	}
	cout << l << endl;
	
	return 0;
}