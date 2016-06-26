#include <iostream>
#include <algorithm>
#include <functional>
#include <numeric>

using namespace std;

int main(){
	int n;
	cin >> n;
	int d[500];
	for(int i=0;i<n;i++){
		cin >> d[i];
	}
	int sum = accumulate(d,d+n,0);
	cout << sum << endl;
	sort(d,d + n,greater<int>());
	if(d[0] <= sum - d[0]){
		cout << 0 << endl;
	} else if(n == 1) {
		cout << d[0] << endl;
	} else {
		cout << (d[0] - sum + d[0]) << endl;
	}
	return 0;
}