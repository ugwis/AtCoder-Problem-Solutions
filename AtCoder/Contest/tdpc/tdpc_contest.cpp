#include <iostream>

using namespace std;

bool dp[10100];

int main(){
	int n;
	dp[0] = true;
	cin >> n;
	for (int i = 0; i < n; i++){
		int p;
		cin >> p;
		for (int i = 10099 - p; i >= 0; i--){
			dp[i + p] |= dp[i];
		}
	}
	int ans = 0;
	for (int i = 0; i < 10100; i++){
		if(dp[i]) ans++;
	}
	cout << ans << endl;
}