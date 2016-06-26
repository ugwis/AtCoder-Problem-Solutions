#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <functional>
#include <cmath>
using namespace std;

int main(){
	int n;
	vector<int> v;
	cin >> n;
	for (int i = 0; i<n; i++){
		int r;
		cin >> r;
		v.push_back(r);
	}
	sort(v.begin(), v.end(),greater<int>());
	int a = 0;

	for (int i = 0; i<(signed)v.size(); i++){
		if (i % 2 == 0) a += pow(v[i],2);
		else a -= pow(v[i],2);
	}
	cout << setprecision(12) << fixed;
	cout << a*M_PI << endl;
	return 0;
}