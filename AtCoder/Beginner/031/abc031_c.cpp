#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;cin >> n;
	int a[50];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int ans = -1250;
	for(int i=0;i<n;i++){
		int maxaoki = -1250;
		int maxtakahashi = -1250;
		for(int j=0;j<n;j++){
			if(i == j) continue;
			int takahashi=0,aoki=0;
			for(int k=0;k<=max(i,j)-min(i,j);k++){
				if(k%2==0) takahashi+=a[k+min(i,j)];
				else aoki+=a[k+min(i,j)];
			}
			if(maxaoki < aoki){
				maxaoki = aoki;
				maxtakahashi = takahashi;
			}
		}
		ans = max(ans,maxtakahashi);
	}
	cout << ans << endl;
	return 0;
}