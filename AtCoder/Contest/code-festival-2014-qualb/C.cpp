#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
int main(){
	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	int c1[26] = {}, c2[26] = {}, c3[26] = {};
	int n = s1.size();
	for (int i = 0; i<n; i++){
		c1[s1[i] - 'A']++;
		c2[s2[i] - 'A']++;
		c3[s3[i] - 'A']++;
	}
	int r1 = n / 2;
	int r2 = r1;
	bool f = true;
	for (int i = 0; i<26; i++){
		if (c1[i] + c2[i] < c3[i]) f = false;
		else {
			r1 -= max(c3[i] - c1[i], 0);
			r2 -= max(c3[i] - c2[i], 0);
		}
	}
	if (r1 >= 0 && r2 >= 0 && f){
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	return 0;
}
