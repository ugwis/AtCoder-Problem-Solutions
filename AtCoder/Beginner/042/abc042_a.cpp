#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<int> v(3);
	
	for(int i=0;i<3;i++) cin >> v[i];
	sort(v.begin(),v.end());
	if(v[0]==v[1] && v[0]==5 && v[2]==7){
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	
	return 0;
}