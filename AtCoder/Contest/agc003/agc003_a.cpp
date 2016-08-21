#include <bits/stdc++.h>
using namespace std;
int main() {
	string str;
	cin >> str;
	int s = 0, n = 0, w = 0, e = 0;
	for (int unsigned i = 0; i < str.size(); i++) {
		if (str[i] == 'S') s++;
		if (str[i] == 'N') n++;
		if (str[i] == 'W') w++;
		if (str[i] == 'E') e++;
	}
	if (((s>0&&n>0)||(s==0&&n==0)) && ((w>0&&e>0)||(w==0&&e==0))) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
	return 0;
}