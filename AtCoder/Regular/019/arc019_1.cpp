#include <bits/stdc++.h>
using namespace std;


int main(){
	vector<pair<char,int>> v;
	v.emplace_back(make_pair('O','0'));
	v.emplace_back(make_pair('D','0'));
	v.emplace_back(make_pair('I','1'));
	v.emplace_back(make_pair('Z','2'));
	v.emplace_back(make_pair('S','5'));
	v.emplace_back(make_pair('B','8'));

	string s;
	cin >> s;
	
	for(int unsigned i = 0;i < s.size();i++){
		for(int unsigned  j = 0;j < v.size();j++){
			if(s[i] == v[j].first){
				s[i] = v[j].second;
			}
		}
		cout << s[i];
	}
	cout << endl;
	
	return 0;
}