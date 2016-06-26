#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a[3];
	for (int i=0;i<3;i++){
		cin >> a[i];
	}
	int c=1;
	int rank[3];
	for(int i=100;i>=0;i--){
		for(int j=0;j<3;j++){
			if(a[j] == i){
				rank[j] = c;
				c++;
			}
		}
	}
	for(int i=0;i<3;i++){
		cout << rank[i] << endl;
	}
	return 0;
}