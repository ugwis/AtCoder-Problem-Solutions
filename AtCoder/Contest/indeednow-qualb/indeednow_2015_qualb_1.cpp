#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int x1,x2,y1,y2;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	cout << (abs(x1-x2)+abs(y1-y2)+1) << endl;
	return 0;
}