#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
using namespace std;

int main(){
	int n,t,tsum=0;
	cin >> n >> t;
	vector<int> v;
	for(int i=0;i<n;i++){
		int a,b;
		cin >> a >> b;
		v.push_back(a-b);
		tsum+=a;
	}
	if(tsum <= t){
		cout << 0 << endl;
		return 0;
	}
	sort(v.begin(),v.end(),greater<int>());
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=v[i];
		if(tsum-sum<=t){
			cout << (i+1) << endl;
			return 0;
		}
	}
	cout << -1 << endl;
	return 0;
}
