#include <bits/stdc++.h>
using namespace std;
int main(void) {
	// your code goes here
	int n;
	cin >> n;
	
	vector<int> v{1,3,7,9};
	
	int ans=0;
	for(int i=0;i<n;i++){
		int a;
		cin >> a;
		int unsigned j;
		for(j = v.size()-1;j>=0&&a<v[j];j--);
		ans += a - v[j];
	}
	cout << ans << endl;
	return 0;
}
