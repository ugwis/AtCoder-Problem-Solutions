#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,k;
	cin >> n >> k;
	queue<int> q;
	long long int cum=1;
	int ans = 0;
	for(int i=0;i<n;i++){
		int s;
		cin >> s;
		if(s == 0){
			cout << n << endl;
			return 0;
		}
		cum*=s;
		q.push(s);
		while(!q.empty() && cum > k){
			cum/=q.front();
			q.pop();
		}
		ans = max(ans,(int)q.size());
	}
	cout << ans << endl;
	
	return 0;
}