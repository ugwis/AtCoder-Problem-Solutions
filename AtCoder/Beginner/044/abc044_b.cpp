#include <iostream>
using namespace std;

int main() {
	string s;
	cin >> s;
	int a[26] = {0};
	for(int unsigned i=0;i<s.size();i++){
		a[s[i] - 'a']++;
	}
	bool f = true;
	for(int i=0;i<26;i++){
		if(a[i]%2!=0){
			f = false;
		}
	}
	if(f){
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	return 0;
}