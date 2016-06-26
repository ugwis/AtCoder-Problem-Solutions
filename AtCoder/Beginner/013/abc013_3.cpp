#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
	lli n,h; cin >> n >> h;
	lli a,b,c,d,e; cin >> a >> b >> c >> d >> e;
	lli ans = numeric_limits<lli>::max();
	for(lli x=0;x<=n;x++){
		lli y = 0;
		if(e*(n-x)-h-b*x >= 0) y = (e*(n-x)-h-b*x)/(d+e)+1;
		ans = min(ans,(lli)a*x+c*y);
	}
	cout << ans << endl;
	return 0;
}