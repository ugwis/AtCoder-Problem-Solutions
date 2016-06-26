#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,a,b;
	cin >> a >> b >> n;
	while(1){
		if(n%a == 0 && n%b == 0){
			cout << n << endl;
			break;
		}
		n++;
	}
	return 0;
}