#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	vector<int> s(n+1,-1);
	for(int i=0;i<n;i++){
		cin >> s[i];
		if(s[i] == 0) s[i]--;
	}
	sort(s.begin(),s.end(),greater<int>());
	int q;cin>>q;
	for (int i = 0; i < q; i++) {
		int k;
		cin >> k;
		cout << s[k]+1 << endl;
	}
	return 0;
}