#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n,ans=0;
	cin >> n;
	for(int i=0;i<n;i++){
		int a;
		cin >> a;
		ans+=a*pow(2,n-i-1);
	}
	cout << ans << endl;
	return 0;
}
