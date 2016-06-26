#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	vector<string> v;
	for(int i=0;i<n;i++){
		string str;
		cin >> str;
		if(find(v.begin(),v.end(),str) != v.end() || (i>0 && v[i-1][v[i-1].size()-1] != str[0])){
			if(i%2){
				cout << "WIN" << endl;
			} else {
				cout << "LOSE" << endl;
			}
			return 0;
		}
		v.emplace_back(str);
	}
	cout << "DRAW" << endl;
	return 0;
}