#include <iostream>

using namespace std;

int main(){
	int n,k;
	int t[100000];
	cin >> n >> k;
	for(int i=0;i<n;i++){
		cin >> t[i];
	}
	int ret = -1;
	for(int i=2;i<n;i++){
		if(t[i-2] + t[i-1] + t[i] < k){
			ret=i+1;
			break;
		}
	}
	cout << ret << endl;
	return 0;
}