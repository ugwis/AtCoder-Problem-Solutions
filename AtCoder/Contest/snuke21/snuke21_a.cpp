#include <iostream>

using namespace std;

int main(){
	unsigned long long int n;
	cin >> n;
	long ans = 0;
	for (int i = 1;; i++){
		ans += i;
		if (ans == n){
			cout << i << endl;
			break;
		}
		if (ans > n){
			cout << -1 << endl;
			break;
		}
	}
	return 0;
}