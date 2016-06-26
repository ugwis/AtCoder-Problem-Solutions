#include <iostream>
#include <algorithm>
#include <string>
#include <set>
using namespace std;

int main() {
	int n;
	int c=0;
	set<int> sets;
	cin >> n;
	int a;
	for(int i=0;i<n;i++){
		cin >> a;
		while(a%2==0) a/=2;
		sets.insert(a);
	}
	cout << sets.size() << endl;
	return 0;
}