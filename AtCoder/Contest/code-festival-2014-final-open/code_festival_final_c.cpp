#include <iostream>
#include <cmath>

#define ll long long

using namespace std;

ll tohex(int number){
	int n =  number;
	ll ret = 0;
	for(int i=0;number;i++){
		ret+=(ll)(number%10)*pow((ll)n,(ll)i);
		number/=10;
	}
	return ret;
}

int main(){
	ll a;
	cin >> a;
	int ret = -1;
	for(int i=10;i<=10000;i++){
		if(tohex(i) == a) ret = i;
	}
	cout << ret << endl;
	return 0;
}