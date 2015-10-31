#include <iostream>
#include <iomanip>
 
 
using namespace std;
 
int main(){
	int n,sum=0;
	cin >> n;
	for(int i=0;i<n;i++){
		char c;
		cin >> c;
		sum += 4 - c + 'A' + (c == 'F');
	}
	cout << setprecision(20);
	cout << (double)sum/n << endl;
	return 0;
}
