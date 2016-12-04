#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	long long int a,b,x;
	cin >> a >> b >> x;
	cout << (long long int)(b/x) - (long long int)(a/x) + (long long int)(a%x==0) << endl;
	return 0;
}