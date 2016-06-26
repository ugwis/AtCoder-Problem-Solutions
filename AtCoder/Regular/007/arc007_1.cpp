#include <bits/stdc++.h>
using namespace std;

int main() {
	char x;
	string s;
	cin >> x;
	cin >> s;
	s.erase(remove(s.begin(),s.end(),x),s.end());
	cout << s << endl;
	return 0;
}