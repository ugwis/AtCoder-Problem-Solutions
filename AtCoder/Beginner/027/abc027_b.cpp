#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,a[100],sum=0;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
		sum+=a[i];
	}
	if(sum%n!=0){
		cout << "-1" << endl;
		return 0;
	}
	int ave=sum/n;
	int num=0,ans=0;
	for(int i=0;i<n;i++){
		num+=a[i]-ave;
		if(num) ans++;
	}
	cout << ans << endl;
	return 0;
}