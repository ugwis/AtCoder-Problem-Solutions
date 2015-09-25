#include <iostream>
#include <cmath>
#define lli long long int
using namespace std;

int main(){
	lli n,ans=0;cin >> n;
	for(lli i = 1;i<pow(10,15);i*=10){
		ans += n/(i*10)*i;
		lli d = (n/i)%10;
		if(d>1) ans+=i;
		if(d==1) ans+=n%i+1;
	}
	cout << ans << endl;
	return 0;
}
