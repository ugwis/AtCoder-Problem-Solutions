#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<int> dp(n,INT_MAX);
	dp[n - 1] = 0;
	for (int i = n - 2; i >= 0; i--) {
		int x = INT_MAX;
		if (i + 1 < n) x = min(x, abs(a[i + 1] - a[i]) + dp[i+1]);
		if (i + 2 < n) x = min(x, abs(a[i + 2] - a[i]) + dp[i+2]);
		dp[i] = x;
	}
	cout << dp[0] << endl;
	return 0;
}