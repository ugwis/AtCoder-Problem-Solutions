#include<bits/stdc++.h>
#define lli long long int
const lli mod=1e9+7;
using namespace std;

lli modpow(lli x, lli n) {
	if (n == 0) return 1;
	lli y = modpow(x, n / 2);
	if (n % 2) {
		return (((y*y)%mod)*x)%mod;
	}
	else {
		return (y*y)%mod;
	}
}

int main() {
	int w, h;
	cin >> w >> h;
	lli ans = 1;
	for (int i = 1; i < w; i++) {
		ans = (ans*(w + h - i - 1) % mod*modpow(i, mod - 2)) % mod;
	}
	cout << ans << endl;
	return 0;
}