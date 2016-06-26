#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(){
	int n, a, b;
	long long mini = 1000000000000, maxi = 0, sum = 0;
	cin >> n >> a >> b;
	for (int i = 0; i<n; i++){
		long long s;
		cin >> s;
		mini = min(mini, s);
		maxi = max(maxi, s);
		sum += s;
	}
	long double ave = sum / (long double)n;
	if (maxi == mini) cout << -1 << endl;
	else {
		long double p = b / (long double)(maxi - mini);
		long double q = a - ave*p;
		cout << setprecision(20) << p << " " << q << endl;
	}
	return 0;
}