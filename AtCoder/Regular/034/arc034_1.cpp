#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	double ret;
	cin >> n;
	for(int i=0;i<n;i++){
		double a,b,c,d,e;
		cin >> a >> b >> c >> d >> e;
		ret = max(ret,a+b+c+d+e*110/900);
	}
	cout << fixed << fixed << ret << endl;
	return 0;
}