#include <iostream>

using namespace std;

int countLY(int y) {
	int ret = y / 4;
	ret -= y/100;
	ret += y/400;
	return ret;
}

int main(){
	int a, b;
	cin >> a >> b;
	cout << (countLY(b) - countLY(a-1)) << endl;
	return 0;
}
