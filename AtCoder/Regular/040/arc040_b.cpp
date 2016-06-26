#include <iostream>
#include <string>

using namespace std;

int main(){
	int n, r;
	string s;
	cin >> n >> r;
	cin >> s;
	int ans = 0;
	int x=-1;
	for (int i = 0; i < n; i++) if (s[i] == '.') x = i;
	for (int i = 0; i < n && i <= x; i++){
		if (i + r > x){
			ans++;
			break;
		}
		else {
			if (s[i] == '.'){
				for (int j = 0; j < r; j++) s[i + j] = 'o';
				ans++;
			}
		}
		ans++;
	}
	cout << ans << endl;
}