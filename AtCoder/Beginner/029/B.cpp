#include <iostream>
#include <string>

using namespace std;

int main(){
	int ret = 0;
	for(int i=12;i--;){
		string s;
		cin >> s;
		if(s.find("r", 0 ) != string::npos) ret++;
	}
	cout << ret << endl;
	return 0;
}
