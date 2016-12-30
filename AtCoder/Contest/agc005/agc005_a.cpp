#include <bits/stdc++.h>

using namespace std;

int main(){
	string x;
	cin >> x;
	int y=0;
	int ans=0;
	for(int unsigned i=0;i<x.size();i++){
		if(x[i] == 'S'){
			y++;
		}else{
			if(y>0){
				y--;
			} else {
				ans+=2;
			}
		}
	}
	cout << ans << endl;
	return 0;
}