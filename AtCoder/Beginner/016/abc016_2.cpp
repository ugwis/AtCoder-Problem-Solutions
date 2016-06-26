#include <bits/stdc++.h>

using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	bool s1 = a+b==c;
	bool s2 = a-b==c;
	if(s1 && s2) cout << "?" << endl;
	else if(s1) cout << "+" << endl;
	else if(s2) cout << "-" << endl;
	else cout << "!" << endl;
	return 0;
}