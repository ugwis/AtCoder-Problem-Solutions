#include <iostream>
using namespace std;
int main(){
	int n,l;
	string s;
	cin >> n >> l;
	cin >> s;
	int t = 1;
	int ans = 0;
	for(int i=0;i<s.size();i++){
		if(s[i] == '+') t++ ;
		if(s[i] == '-') t--;
		if(t > l){
			t = 1;
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}