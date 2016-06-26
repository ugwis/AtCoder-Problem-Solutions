#include <iostream>

using namespace std;

int main(){
	int n,m;
	int x,y;
	cin >> n >> m;
	cin >> x >> y;
	int a[100001],b[100001];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<m;i++){
		cin >> b[i];
	}
	int idxa = 0,idxb = 0;
	int ans = 0;
	int now = 0;
	while(1){
		while(a[idxa]<now) idxa++;
		if(idxa>=n) break;
		now=a[idxa]+x;
		while(b[idxb]<now) idxb++;
		if(idxb>=m) break;
		now=b[idxb]+y;
		ans++;
	}
	cout << ans << endl;
	return 0;
}