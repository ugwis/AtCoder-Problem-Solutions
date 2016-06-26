#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	int ret = b / 4;
	ret -= (a - 1) / 4;
	for (int i = 0; i <= 2000000000; i+=100){
		if (a <= i && b >= i) ret--;
	}
	for (int i = 0; i <= 2000000000; i += 400){
		if (a <= i && b >= i) ret++;
	}
	cout << ret << endl;
	return 0;
}