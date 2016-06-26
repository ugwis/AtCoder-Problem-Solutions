#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	bool flag = false;
	while (cin >> s, !cin.eof()) {
		if (flag) cout << " ";
		if (s == "Left") cout << "<";
		if (s == "Right") cout << ">";
		if (s == "AtCoder") cout << "A";
		flag = true;
	}
	cout << endl;
	return 0;
}