#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int a,ans = 0;
	cin >> a;
	for(int i=1;i<a;i++){
		ans = max(ans,i*(a-i));
	}
	cout << ans << endl;
	return 0;
}