#include <bits/stdc++.h>

using namespace std;

int main(){
	int w,h;
	cin >> w >> h;
	if(w/4 == h/3){
		cout << "4:3" << endl;
	} else {
		cout << "16:9" << endl;
	}
	
	return 0;
}