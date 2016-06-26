#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,sum=0;
	cin >> n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin >> a[i];
		sum+=a[i];
	}
	cout << ceil((double)sum/(n-count(a.begin(),a.end(),0))) << endl;
	return 0;
}