#include<bits/stdc++.h>
using namespace std;

bool check(int c,vector<int> v){
	string s = to_string(c);
	for(int unsigned i=0;i<s.size();i++){
		if(find(v.begin(),v.end(),s[i] - '0') != v.end()){
			return false;
		}
	}
	return true;
}

int main(){
	int n,k;
	cin >> n >> k;
	vector<int> v(k);
	for(int i=0;i<k;i++){
		cin >> v[i];
	}
	while(!check(n,v)){
		n++;
	}
	cout << n << endl;

	return 0;
}