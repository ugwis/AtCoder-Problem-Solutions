#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int ans=0;
	for(int i=0;i<n;i++){
		int s=0;
		int a;
		for(int i=0;i<5;i++) cin >> a,s+=a;
		if(s < 20) ans++;
	}
	cout << ans << endl;
	return 0;
}