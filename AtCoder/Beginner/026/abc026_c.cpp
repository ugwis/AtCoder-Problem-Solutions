#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <functional>
#include <cmath>
#include <array>
using namespace std;

int main(){
	int n;
	cin >> n;
	array<int, 20> b;
	array<pair<int, int>, 20> p;
	for (int i = 0; i < 20; i++){
		p[i] = make_pair(0, 1048577);
	}
	for (int i = 1; i < n; i++){
		cin >> b[i];
	}
	for (int i = n - 1; i > 0; i--){
		if (p[i].first == 0){
			p[i] = make_pair(0, 0);
		}
		int x = p[i].first + p[i].second + 1;
		p[b[i] - 1] = make_pair(max(p[b[i] - 1].first, x), min(p[b[i] - 1].second, x));
	}
	cout << (p[0].first + p[0].second + 1) << endl;
	return 0;
}