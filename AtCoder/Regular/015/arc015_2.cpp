#include <bits/stdc++.h>
using namespace std;
int main(){
	int t[6] = {0};
	int n;cin >> n;
	for(int i=0;i<n;i++){
		double maxi,mini;
		cin >> maxi >> mini;
		if(maxi >= 35.0) t[0]++;
		else if(maxi >= 30.0) t[1]++;
		else if(maxi >= 25.0) t[2]++;
		if(mini >= 25.0) t[3]++;
		if(mini < 0.0 && maxi >= 0.0) t[4]++;
		if(maxi < 0.0) t[5]++;
	}
	for(int i=0;i<6;i++){
		if(i!=0) cout << " ";
		cout << t[i];
	}
	cout << endl;
	return 0;
}