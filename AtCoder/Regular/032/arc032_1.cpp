#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin >> n;
	int s = n*(n+1)/2;
	if(s==1){
		cout << "BOWWOW" << endl;
		return 0;
	}
	for(int i=2;i<ceil(sqrt(s));i++){
		if(s%i==0){
			cout << "BOWWOW" << endl;
			return 0;
		}
	}
	cout << "WANWAN" << endl;
	return 0;
}