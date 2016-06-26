#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){

	int a,b,c,k;
	int s,t;

	cin >> a >> b >> c >> k;
	cin >> s >> t;

	int ret = a*s + b*t;

	if(s + t >= k) ret -= (s + t) * c;

	cout << ret << endl;

	return 0;
}