#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	int n;
	cin >> n;
	string s;
	for(int i=0;i<n;i++){
		s += 'a';
	}
	bool escape = false;
	while(!escape){
		cout << s << endl;
		s[n-1]++;
		while(s.find("d",0) != string::npos){
			int r = (int)s.find("d",0);
			if(r - 1 < 0){
				escape = true;
				break;
			}
			s[r - 1]++;
			s[r] = 'a';
		}
	}

	//	cout << ret << endl;
	return 0;
}