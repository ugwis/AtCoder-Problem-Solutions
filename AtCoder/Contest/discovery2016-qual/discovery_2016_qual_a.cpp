#include <bits/stdc++.h>
using namespace std;
int main(){
	int w;
	cin >> w;
	string s("DiscoPresentsDiscoveryChannelProgrammingContest2016");
	int unsigned i;
	for(i=0;i<s.size();i++){
		cout << s[i];
		if((i+1)%w == 0) cout << endl; 
	}
	if(i%w != 0) cout << endl;
	return 0;
}