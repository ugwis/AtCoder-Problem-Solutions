#include <iostream>

using namespace std;

int main(){
	int n,x,ans=0;
	cin >> n >> x;
	for(int i=0;i<n;i++){
		int a;
		cin >> a;
		if(x%2){
			ans+=a;
		}
		x/=2;
	}
	cout << ans << endl;
	return 0;
}
