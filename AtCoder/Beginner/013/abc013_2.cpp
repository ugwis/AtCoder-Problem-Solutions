#include <bits/stdc++.h>

using namespace std;
int main(){
	int a,b;
	cin >> a;
	cin >> b;
	cout << min(abs(a-b),min(abs(a-b+10),abs(b-a+10))) << endl;
	return 0;
}
