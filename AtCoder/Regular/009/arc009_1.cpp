#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int ans = 0;
	for(int i=0;i<n;i++){
		int a,b;
		cin >> a >> b;
		ans += a*b;
	}
	cout << (int)(ans*1.05) << endl;
	return 0;
}