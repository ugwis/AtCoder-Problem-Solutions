#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,a,b;
	cin >> n >> a >>b;
	string s;
	cin >> s;
	for(int unsigned i=0;i<s.size();i++){
		if(s[i] == 'a'){
			if(a+b > 0){
				cout << "Yes" << endl;
				if(a>0) a--;
				else if(b>0) b--;
			} else {
				cout << "No" << endl;
			}
		} else if(s[i] == 'b'){
			if(b > 0){
				cout << "Yes" << endl;
			} else {
				cout << "No" << endl;
			}
			if(b>0) b--;
		} else {
			cout << "No" << endl;
		}
	}
	
	return 0;
}