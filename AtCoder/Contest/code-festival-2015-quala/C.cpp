#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
using namespace std;

int main(){
	int i,n,t,sum=0;
	vector<int> v;
	
	cin >> n >> t;
	
	for(int i=0;i<n;i++){
		int a,b;
		cin >> a >> b;
		v.push_back(a-b);
		sum+=a;
	}
	
	sort(v.begin(),v.end(),greater<int>());
	
	for(i=0;i<n;i++){
		if(sum<=t) break;
		sum-=v[i];
	}
	cout << (sum<=t?i:-1) << endl;
	return 0;
}

