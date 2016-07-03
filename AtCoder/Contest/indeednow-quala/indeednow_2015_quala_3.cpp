#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	//int count[1000001];
	int ss[100002];
	//memset(count,0,sizeof(count));
	int maxi=0;
	cin >> n;
	for(int i=0;i<n;i++){
		int s;
		cin >> s;
		if(s==0) ss[i] = -1;
		else ss[i] = s;
		maxi = max(maxi,s);
	}
	ss[n] = maxi+1;
	ss[n+1] = -1;
	sort(ss,ss + n+1,greater<int>());
	int q;
	cin >> q;
	for(int i=0;i<q;i++){
		int k;
		cin >> k;
		cout << ss[k+1]+1 << endl;
	}
	return 0;
}