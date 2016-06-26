#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;
	bool flag=true;
	for(int i=0;i<(int)s.length();i++){
		if(s[i] == 'c'){
			if(i<(int)s.length()){
				if(s[i+1] == 'h'){
					i++;
					continue;
				}
			}
		}
		if(s[i] == 'o') continue;
		if(s[i] == 'k') continue;
		if(s[i] == 'u') continue;
		flag=false;
		break;
	}
	if(flag) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}