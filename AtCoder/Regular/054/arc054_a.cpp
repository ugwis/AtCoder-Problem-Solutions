#include <bits/stdc++.h>

using namespace std;

int main(){
	int l,x,y,s,d;
	cin >> l >> x >> y >> s >> d;
	long double ans = numeric_limits<long double>::max();
	int back = x-y;
	int front = x+y;
	int start = l+s;
	int end[3] = {d,l+d,2*l+d};
	for(int i=0;i<3;i++){
		int distance = end[i] - start;
		if(distance <= 0 && back < 0){
			ans = min(ans,distance/(long double)back);
		}
		if(distance > 0){
			ans = min(ans,distance/(long double)front);
		}
	}
	cout << setprecision(12);
	cout << ans << endl;
	return 0;
}