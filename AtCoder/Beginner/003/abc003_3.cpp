#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(){
	int n,k;
	cin >> n >> k;
	int r[101];
	for(int i=0;i<n;i++){
		cin >> r[i];
	}
	sort(r, r + n);
	long double rate = 0.0;
	for(int i=n-k;i<n;i++){
		rate = (rate + r[i])/2.0;
	}
	cout << setprecision(20);
	cout << rate << endl;
	return 0;
}