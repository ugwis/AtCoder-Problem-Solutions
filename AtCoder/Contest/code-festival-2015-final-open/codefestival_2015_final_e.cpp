#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	int count_minus = distance(s.begin(),find(s.begin(),s.end(),'!'));
	int count_exc = count(s.begin(),s.end(),'!');
	if(count_minus%2) cout << "-";
	if(count_exc!=0){
		if(count_exc%2) cout << "!";
		else cout << "!!";
	}
	cout << endl;
	return 0;
}