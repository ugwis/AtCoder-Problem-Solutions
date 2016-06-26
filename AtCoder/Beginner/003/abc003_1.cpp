#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int n;
	cin >> n;
	cout << setprecision(20);
	cout << (1+n)*10000/2.0 << endl;
	return 0;
}