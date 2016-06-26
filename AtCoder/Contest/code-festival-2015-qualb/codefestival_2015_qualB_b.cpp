#include <iostream>
#include <string>

using namespace std;


int c[100001];

int main(){
	int n,m;
	cin >> n >> m;
	for(int i=0;i<n;i++){
		int a;
		cin >> a;
		c[a]++;
	}
	string ans = "?";
	for(int i=0;i<=m;i++){
		if(c[i] > n/2){
			if(ans != "?"){
				ans = "?";
			} else {
				ans = to_string(i);
			}
		}
	}
	cout << ans << endl;

	return 0;
}
