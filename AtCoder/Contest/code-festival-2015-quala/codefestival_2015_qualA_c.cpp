#include <iostream>
#include <cmath>
#include <vector>
#include <functional>
#include <algorithm>
#define lli long long int
using namespace std;

int main(){
	int n,t;
	vector<lli> d;
	cin >> n >> t;
	lli asum=0;
	for(int i=0;i<n;i++){
		lli a,b;
		cin >> a >> b;
		asum+=a;
		d.push_back(a-b);
	}
	if(asum <= t){
		cout << 0 << endl;
		return 0;
	}
	sort(d.begin(),d.end(),greater<lli>());
	lli sum=0;
	for(int unsigned i=0;i<d.size();i++){
		sum+=d[i];
		if(asum-sum<=t){
			cout << (i+1) << endl;
			return 0;
		}
	}
	cout << -1 << endl;
	return 0;
}