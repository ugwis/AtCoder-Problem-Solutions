#include <iostream>

using namespace std;

int main(){
	int d[100001] = {0};
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		int a;
		cin >> a;
		d[a]++;
	}
	int ans = 0;
	for(int i=0;i<=100000;i++){
		if(d[i] < 1) continue;
		ans+=d[i]-1;
	}
	cout << ans << endl;
	return 0;
}