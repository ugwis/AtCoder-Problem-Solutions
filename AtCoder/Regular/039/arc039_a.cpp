#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <typeinfo>

using namespace std;
 
int main(){
	int ret=-1000;
	string a,b;
	cin >> a >> b;
	for(char c = '0';c<='9';c++){
		for(int i=0;i<3;i++){
			if(i != 0 || c != '0'){
				char tmp = a[i];
				a[i] = c;
				ret = max(ret,stoi(a) - stoi(b));
				a[i] = tmp;
	
				tmp = b[i];
				b[i] = c;
				ret = max(ret,stoi(a) - stoi(b));
				b[i] = tmp;
			}
		}
	}
	cout << ret << endl;
	return 0;
}