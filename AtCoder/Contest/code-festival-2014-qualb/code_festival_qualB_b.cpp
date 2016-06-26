#include <iostream>

using namespace std;

int main(){
	int n, k,sum=0;
	cin >> n >> k;
	for (int i = 0; i < n; i++){
		int a;
		cin >> a;
		sum += a;
		if (sum >= k){
			cout << (i + 1) << endl;
			break;
		}
	}
	return 0;
}