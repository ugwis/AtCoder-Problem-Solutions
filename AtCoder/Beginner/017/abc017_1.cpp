#include <iostream>
using namespace std;

int main() {
	int sum=0,s,e;
	for(int i=0;i<3;i++){
		cin >> s >> e;
		sum+=s/10*e;
	}
	cout << sum << endl;
	return 0;
}