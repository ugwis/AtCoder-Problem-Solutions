#include <bits/stdc++.h>
using namespace std;
int main(){
	char c;
	cin >> c;
	if(c == 'O' || c == 'P' || c == 'K' || c == 'L'){
		cout << "Right" << endl;
	} else {
		cout << "Left" << endl;
	}
	return 0;
}