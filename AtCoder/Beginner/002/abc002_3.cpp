#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<pair<int,int>> v;
	for(int i=0;i<3;i++){
		int x,y;
		cin >> x >> y;
		v.push_back(make_pair(x,y));
	}
	sort(v.begin(),v.end());
	int dx = -v[0].first;
	int dy = -v[0].second;
	for(int i=0;i<3;i++){
		v[i].first += dx;
		v[i].second += dy;
	}
	cout << setprecision(12);
	cout << abs(v[1].second*v[2].first - v[1].first*v[2].second)/2.0 << endl;

	return 0;
}