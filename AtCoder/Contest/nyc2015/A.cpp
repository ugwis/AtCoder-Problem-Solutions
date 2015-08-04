#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	string s;
	cin >> n;
	while(n){
		s.push_back((n&1) + '0');
		n>>=1;
	}
	//cout << string(s.rbegin(),s.rend()) << endl;
	if(s == string(s.rbegin(),s.rend())){
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	return 0;
}