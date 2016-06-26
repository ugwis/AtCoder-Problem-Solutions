#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	vector<int> v;
	int n;
	cin >> n;
	for (int i = 0; i<n; i++){
		int s;
		cin >> s;
		v.push_back(s);
	}
	sort(v.begin(), v.end());
	cout << v[0] << endl;
	return 0;
}