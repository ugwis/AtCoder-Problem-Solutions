#include <bits/stdc++.h>
 
#define SIZE 30
 
using namespace std;
 
int a[SIZE][SIZE];
 
int d[5]={0,-1,0,1,0};
 
vector<pair<int,int>> get_peaks(){
	vector<pair<int,int>> ret;
	int maxi = 0;
	for(int i=0;i<SIZE;i++){
		for(int j=0;j<SIZE;j++){
			if(maxi <= a[i][j]){
				if(maxi < a[i][j]) ret.clear();
				maxi = a[i][j];
				ret.emplace_back(make_pair(i,j));
			}
		}
	}
	return ret;
}
 
vector<pair<int,int>> route;
vector<pair<int,int>> search_route(int x,int y){
/*	cout << "[" ;
	for(int unsigned i = 0;i<route.size();i++){
		cout << "(" << route[i].first << "," << route[i].second << ") ";
	}
	cout << "]" << endl;*/
	
	vector<pair<int,int>> ret;
	for(int i=0;i<4;i++){
		int X = x+d[i];
		int Y = y+d[i+1];
		if(X < 0 || X >= SIZE) continue;
		if(Y < 0 || Y >= SIZE) continue;
		if(a[x][y]-1 != a[X][Y]) continue;
		if(a[X][Y] <= 0) continue;
		if(find(route.begin(),route.end(),make_pair(X,Y)) != route.end()) continue;
		route.push_back(make_pair(X,Y));
		vector<pair<int,int>> r = search_route(X,Y);
		if(r.size() > ret.size()){
			ret = r;
		}
		route.pop_back();
	}
	if(ret.empty()) return route;
	return ret;
}
 
vector<pair<int,int>> answer;
void monte_carlo(){
	vector<pair<int,int>> ret;
	auto peaks = get_peaks();
	vector<pair<int,int>> best_route;
	for(auto peak:peaks){
		route.push_back(peak);
		if(a[peak.first][peak.second] <= 0) break;
		vector<pair<int,int>> r = search_route(peak.first,peak.second);
		if(r.size() > best_route.size()) best_route=r;
		route.pop_back();
	}
	if(best_route.empty()) return;
	for(int unsigned i = 0;i<best_route.size();i++){
		answer.emplace_back(best_route[i]);
		//cout << best_route[i].first+1 << " " << best_route[i].second+1 << endl;
		a[best_route[i].first][best_route[i].second]--;
	}
	/*
	cout << endl;
	for(int i=0;i<SIZE;i++){
		for(int j=0;j<SIZE;j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << "---" << endl;*/
	monte_carlo();
}	
 
int main(){
	for(int i=0;i<SIZE;i++){
		for(int j=0;j<SIZE;j++){
			cin >> a[i][j];
		}
	}
	monte_carlo();
	for(int unsigned i = 0;i<answer.size();i++){
		cout << answer[i].first+1 << " " << answer[i].second+1 << endl;
	}
	return 0;
}