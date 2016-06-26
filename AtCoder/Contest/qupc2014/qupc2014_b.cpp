#include <bits/stdc++.h>

using namespace std;

string t[10][2] = {
	{"nil","nilium"},
	{"un","unium"},
	{"bi","bium"},
	{"tri","trium"},
	{"quad","quadium"},
	{"pent","pentium"},
	{"hex","hexium"},
	{"sept","septium"},
	{"oct","octium"},
	{"enn","ennium"}
};

int main(){
	string n;cin >> n;
	string ans;
	for(int unsigned i = 0; i < n.size() ;i++){
		if(i+1<n.size() && n[i] == '9' && n[i+1] == '0') ans+="en";
		else ans+=t[n[i] - '0'][i==n.size()-1];
	}
	ans[0] += 'A' - 'a';
	cout << ans << endl;
	return 0;
}