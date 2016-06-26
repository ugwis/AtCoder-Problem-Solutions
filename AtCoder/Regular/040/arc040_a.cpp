#include <iostream>
#include <string>

using namespace std;

int main(){

	int n;
	int ret=0;
	cin >> n;
	for (int i = 0; i < n; i++){
		string s;
		cin >> s;
		for (int unsigned i = 0; i < s.size(); i++){
			if (s[i] == 'R') ret++;
			else if (s[i] == 'B') ret--;
		}
	}
	if (ret>0) cout << "TAKAHASHI" << endl;
	else if (ret == 0) cout << "DRAW" << endl;
	else cout << "AOKI" << endl;
	return 0;
}