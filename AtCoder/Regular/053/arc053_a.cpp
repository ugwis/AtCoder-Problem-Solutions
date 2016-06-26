#include <bits/stdc++.h>

using namespace std;

int main(){
	int h,w;
	cin >> h >> w;
	int ans = 0;
	ans+=(w-1)*h;
	ans+=(h-1)*w;
	cout << ans << endl;
	return 0;
}