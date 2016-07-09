#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int n, k;

int w[1000], p[1000];

bool check(long double x) {
	vector<long double> v(n);
	for (int i = 0; i < n; i++) {
		long double tmp = w[i] * (p[i] / 100.);//食塩の質量
		v[i] = tmp - x*w[i];
	}
	sort(v.rbegin(), v.rend());
	long double sum = 0.0;
	for (int i = 0; i < k; i++) {
		sum += v[i];
	}
	return sum >= 0.0;
}

int main() {
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> w[i] >> p[i];
	}
	long double low = 0.0;
	long double high = 1.0;
	for (int i = 0; i < 100;i++){
		if (check((low + high) / 2)) {
			low = (low + high) / 2;
		}
		else {
			high = (low + high) / 2;
		}
	}
	cout << setprecision(12) << fixed;
	cout << low*100 << endl;
	return 0;
}