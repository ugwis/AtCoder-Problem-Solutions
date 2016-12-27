#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	int sum = 0;
	for(int i=0;i<n;i++){
		cin >> a[i];
		sum += a[i];
	}
	int x1 = sum/n;
	int x2 = sum/n + 1;
	int ans1 = 0;
	int ans2 = 0;
	for(int i=0;i<n;i++){
		ans1 += pow(a[i] - x1,2);
		ans2 += pow(a[i] - x2,2);
	}
	cout << min(ans1,ans2) << endl;
	
	
	return 0;
}