#include <iostream>

using namespace std;

void rec(int n,string s){
	if(!n) cout << s << endl;
	else for(char i='a';i<='c';i++){
		rec(n-1,s+i);
	}
}

int main(){
	int n; cin >> n;
	rec(n,"");
	return 0;
}