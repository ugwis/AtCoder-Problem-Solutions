#include <iostream>
#include <algorithm>
#include <array>

using namespace std;


int main(){
	array<int, 3> s;
	cin >> s[0] >> s[1] >> s[2];
	sort(s.begin(), s.end());
	cout << (s[1] == s[0] ? s[2] : s[0]) << endl;
	return 0;
}