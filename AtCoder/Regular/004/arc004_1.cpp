#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(){
	int n;
	cin >> n;
	int x[100],y[100];
	for(int i=0;i<n;i++){
		cin >> x[i] >> y[i];
	}
	double maxi = 0.0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			double r = sqrt(pow(x[i] - x[j],2)+pow(y[i] - y[j],2));
			maxi = max(maxi,r);
		}
	}
	cout << setprecision(12);
	cout << maxi << endl;
	return 0;
}