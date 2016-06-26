#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	string s;
	int n;
	
	cin >> s;
	cin >> n;
	int l,r;
	for(int i=0;i<n;i++){
		cin >> l >> r;
		for (int j=0;j<=(r-l)/2;j++){
			swap(s[l+j-1],s[r-j-1]);
		}
	}
	cout << s << endl;
	return 0;
}