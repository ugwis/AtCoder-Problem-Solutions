#include <bits/stdc++.h>

using namespace std;

int main(){
	int a,b;
	cin >> a >> b;
	if(a <= 0 && b >= 0){
		cout << "Zero" << endl;
	} else{
		if(a >= 0){
			cout << "Positive" << endl;
		} else {
			int m = b-a+1;
			if(m%2==0){
				cout << "Positive" << endl;
			} else {
				cout << "Negative" << endl;
			}
		}
	}
	
	return 0;
}