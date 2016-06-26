#include <iostream>
#include <algorithm>

using namespace std;

int cnt[4];

int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		char c;
		cin >> c;
		cnt[c-'1']++;
	}
	int mini=100,maxi=0;
	for(int i=0;i<4;i++){
		mini = min(mini,cnt[i]);
		maxi = max(maxi,cnt[i]);
	}
	cout << maxi << " " << mini << endl;
	return 0;
}