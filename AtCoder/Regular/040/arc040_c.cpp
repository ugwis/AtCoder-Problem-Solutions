#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<string> s;
	for(int i=0;i<n;i++){
		string str;
		cin >> str;
		s.push_back(str);
	}
	int ans = 0;
	for(int i=0;i<n;i++){
		int right = -1;
		for(int j=0;j<(signed)s[i].size();j++){
			if(s[i][j] == '.') right = j;
		}
		if(right == -1) continue;
		ans++;
		for(int j=0;j<=right;j++){
			s[i][j] = 'o';
		}
		if(i == n-1) continue;
		for(int j=right;j<(signed)s[i+1].size();j++){
			s[i+1][j] = 'o';
		}
	}
	cout << ans << endl;
}