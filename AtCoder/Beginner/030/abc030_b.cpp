#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	double r2 = m*6;
	double r1 = n%12*30 + r2/12;
	cout << setprecision(12);
	cout << min(min(abs(r2-r1),abs(r2-r1-360.0)),abs(r1-r2-360.0)) << endl;
	return 0;
}