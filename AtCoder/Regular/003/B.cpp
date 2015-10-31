#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
 
using namespace std;
 
int main(){
	int n;
	cin >> n;
	vector<string> s;
	for(int i=0;i<n;i++){
		string str;
		cin >> str;
		reverse(str.begin(),str.end());
		s.emplace_back(str);
	}
	sort(s.begin(),s.end());
	for(int i=0;i<n;i++){
		reverse(s[i].begin(),s[i].end());
		cout << s[i] << endl;
	}
	return 0;
}
