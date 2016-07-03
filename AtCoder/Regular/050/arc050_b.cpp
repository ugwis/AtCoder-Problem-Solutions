#include <bits/stdc++.h>
#define lli long long int
using namespace std;
 
int main(){
	lli R,B,x,y;
	cin >> R >> B >> x >> y;
	lli l = 0, r = R+1;
	lli K = (l+r)/2;
	while(l < r-1){
		lli k = (R - K)/(x - 1) + (B - K)/(y - 1);
		if(k >= K && K <= B){
			l = K;
		} else {
			r = K;
		}
		K = (l+r)/2;
	}
	cout << K << endl;
	
	return 0;
}