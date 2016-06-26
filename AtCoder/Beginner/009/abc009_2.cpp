#include <iostream>

using namespace std;

int d[1001];

int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		int a;
		cin >> a;
		d[a]++;
	}
	int c = 0;
	for(int i=1000;i>=0;i--){
		if(d[i]){
			if(c==1){
				cout << i << endl;
				break;
			}
			c++;
		}
	}
	return 0;
}