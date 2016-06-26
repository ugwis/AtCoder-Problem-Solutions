#include <bits/stdc++.h>
#define lli long long int
using namespace std;
 
int main(){
	int n;
	cin >> n;
	vector<pair<int,int>> downs;
	vector<pair<int,int>> ups;
	for(int i=0;i<n;i++){
		int a,b;
		cin >> a >> b;
		if(a <= b) downs.emplace_back(make_pair(a,-b));
		else ups.emplace_back(make_pair(-b,a));
	}
	sort(downs.begin(),downs.end());
	sort(ups.begin(),ups.end());
	lli x=0;
	lli maxi = 0;
	for(int unsigned i = 0;i<downs.size();i++){
		maxi = max(maxi,x+downs[i].first);
		x+=downs[i].first + downs[i].second;
	}
	for(int unsigned i = 0;i<ups.size();i++){
		maxi = max(maxi,x + ups[i].second);
		x+=ups[i].second + ups[i].first;
	}
	cout << maxi << endl;
	
	return 0;
}