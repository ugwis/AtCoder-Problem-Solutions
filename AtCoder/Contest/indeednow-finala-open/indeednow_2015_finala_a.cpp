#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[100];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
	int minimum = 2000;
	int maximum = 2;
	for(int i=0;i<n/2;i++){
		minimum = min(minimum,a[i]+a[n-i-1]);
		maximum = max(maximum,a[i]+a[n-i-1]);
	}
	cout << (maximum - minimum) << endl;
}