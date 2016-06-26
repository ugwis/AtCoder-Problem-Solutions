#include <bits/stdc++.h>
using namespace std;
int main(){
	int txa,txb,tya,tyb,t,v,n;
	cin >> txa >> tya >> txb >> tyb >> t >> v;
	cin >> n;
	for(int i=0;i<n;i++){
		int x,y;
		cin >> x >> y;
		if(sqrt(pow(txa - x,2) + pow(tya - y,2)) + sqrt(pow(txb - x,2) + pow(tyb - y,2)) <= t*v){
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}
