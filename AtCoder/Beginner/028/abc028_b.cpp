#include <iostream>

using namespace std;

int main(){
	string s;
	cin >> s;
	int c[6] = {0,0,0,0,0,0};
	for(int unsigned i = 0;i<s.size();i++){
		c[s[i] - 'A']++;
	}
	for(int i=0;i<6;i++){
		if(i != 0) cout << " ";
		cout << c[i];
	}
	cout << endl;
	return 0;
}