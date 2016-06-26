#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int ans = INT_MAX;
	for (int i = 1; i <= n; i++)
	{
		ans = min(ans,abs(n / i - i) + n%i);
	}
	cout << ans << endl;
	return 0;
}