#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){

	int n,t;
	cin >> n >> t;
	int b=-1,ret=0;
	for(int i=0;i<n;i++){
		int a;
		cin >> a;
		ret += t;
		if(b!=-1 && a-b <= t) ret -= t-(a-b);
		b = a;
	}
	cout << ret << endl;
	return 0;
}