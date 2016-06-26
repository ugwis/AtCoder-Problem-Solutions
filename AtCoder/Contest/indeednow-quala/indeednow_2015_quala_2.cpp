#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
	int n;
	int indeednow[127];
	memset(indeednow,0,sizeof(indeednow));
	indeednow['i']=1;
	indeednow['n']=2;
	indeednow['d']=2;
	indeednow['e']=2;
	indeednow['o']=1;
	indeednow['w']=1;
	cin >> n;
	for(int i=0;i<n;i++){
		int table[127];
		memset(table,0,sizeof(table));
		string str;
		cin >> str;
		for(int j=0;j<str.size();j++){
			table[str[j]]++;
		}
		bool flag=false;
		for(int j=0;j<127;j++){
			if(indeednow[j] != table[j]){
				flag=true;
				break;
			}
		}
		if(flag){
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
		}
	}
	return 0;
}