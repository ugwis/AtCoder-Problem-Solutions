#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	cout << min(n/10*100+n%10*15,(n/10+1)*100) << endl;
	return 0;
}