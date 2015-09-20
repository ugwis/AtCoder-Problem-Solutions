#include <iostream>
#include <vector>
 
using namespace std;
 
int main(){
	vector<int> d(100001,-1);
	int n;
	int ret = -1;
	cin >> n;
	int t = -1;
	for(int i=0;i<n;i++){
		int a;
		cin >> a;
		t = max(t,d[a]);
		d[a] = i;
		ret = max(ret,i - t);
	}
	cout << ret << endl;
	return 0;
}