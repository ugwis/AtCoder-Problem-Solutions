#include <bits/stdc++.h>

#define lim 1000000007

using namespace std;
 
int main(){
	long long int a,b,c;
	cin >> a >> b >> c;
	long long int ans = ((a*b)%lim*c)%lim;
	cout << ans << endl;
	
	return 0;
}