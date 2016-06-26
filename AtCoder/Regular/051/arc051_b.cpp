#include <bits/stdc++.h>

using namespace std;

int main(){
	int k;cin >> k;
	int a=2,b=1;
	for(int i=1;i<k;i++){
		int tmp = b;
		b=a;
		a+=tmp;
	}
	cout << a << " " << b << endl;
	return 0;
}