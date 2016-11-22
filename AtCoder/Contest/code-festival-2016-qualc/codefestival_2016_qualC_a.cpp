#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	int status = 0;
	for(int unsigned i=0;i<s.size();i++){
		if(s[i] == 'C' && status == 0) status = 1;
		if(s[i] == 'F' && status == 1) status = 2;
	}
	if(status == 2){
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	
	return 0;
}