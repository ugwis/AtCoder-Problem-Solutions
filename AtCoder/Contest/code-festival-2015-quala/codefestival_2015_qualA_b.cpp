#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[31];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int ans=0;
	for(int i=0;i<n;i++){
		ans+=a[n-i-1]*pow(2,i);
	}
	cout << ans << endl;
	return 0;
}