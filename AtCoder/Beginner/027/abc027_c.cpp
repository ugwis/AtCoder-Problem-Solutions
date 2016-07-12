#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int main(){
	lli n,nn;
	cin >> n;
	int depth = 0;
	nn = n;
	while(nn>0) nn/=2,depth++;
	bool ar = depth%2;
	lli a=1;
	for(int i=0;i<depth-1;i++){
		a=a*2+ar;
		ar = !ar;
	}
	if(depth%2){
		if(a <= n) cout << "Aoki" << endl;
		else cout << "Takahashi" << endl;
	} else {
		if(a <= n) cout << "Takahashi" << endl;
		else cout << "Aoki" << endl;
	}
	
	return 0;
}