#include <iostream>
using namespace std;

int main() {
	for(int i=0;i<30;i++){
		for(int j=0;j<30;j++){
			int a;
			cin >> a;
			for(int k=0;k<a;k++){
				cout << i+1 << " " << j+1 << endl;
			}
		}
	}
	return 0;
}