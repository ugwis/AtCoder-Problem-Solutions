#include <iostream>
#include <string>
 
using namespace std;
 
int main(){
	string a;
	long long int b;
	cin >> a >> b;
	cout << a[(b - 1) % a.size()] << endl;
	return 0;
}
