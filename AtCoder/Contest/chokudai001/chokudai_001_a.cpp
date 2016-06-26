#include <bits/stdc++.h>

#define SIZE 30

using namespace std;

int a[SIZE][SIZE];

int d[5]={0,-1,0,1,0};

pair<int,int> get_peak(){
	pair<int,int> ret(make_pair(0,0));
	for(int i=0;i<SIZE;i++){
		for(int j=0;j<SIZE;j++){
			if(a[ret.first][ret.second] < a[i][j]){
				ret = make_pair(i,j);
			}
		}
	}
	return ret;
}

void search_sur(int x,int y){
	pair<int,int> next(x,y);
	if(a[x][y] <= 0) return;
	cout << x+1 << " " << y+1 << endl;
	a[x][y]--;
	for(int i=0;i<4;i++){
		if(x+d[i] < 0 || x+d[i] >= SIZE) continue;
		if(y+d[i+1] < 0 || y+d[i+1] >= SIZE) continue;
		if(a[x][y] == a[x+d[i]][y+d[i+1]]){
			next = make_pair(x+d[i],y+d[i+1]);
			break;
		}
	}
	if(next != make_pair(x,y)) search_sur(next.first,next.second);
}

int main(){
	for(int i=0;i<SIZE;i++){
		for(int j=0;j<SIZE;j++){
			cin >> a[i][j];
		}
	}
	while(1){
		auto x = get_peak();
		if(a[x.first][x.second] <= 0) break;
		search_sur(x.first,x.second);
		/*
		cout << endl;
		for(int i=0;i<SIZE;i++){
			for(int j=0;j<SIZE;j++){
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
		cout << "---" << endl;
		*/
	}
	return 0;
}