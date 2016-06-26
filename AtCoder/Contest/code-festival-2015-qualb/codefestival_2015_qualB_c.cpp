#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	if(n < m){
		cout << "NO" << endl;
		return 0;
	}
	vector<int> a(n),b(m);
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<m;i++){
		cin >> b[i];
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	int idx = 0;
	for(int i=0;i<n;i++){
		if(a[i] >= b[idx]){
			idx++;
		}
		if(idx == m) break;
	}
	if(idx == m){
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	return 0;
}