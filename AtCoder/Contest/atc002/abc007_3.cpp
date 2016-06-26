#include <bits/stdc++.h>

#define pos(a,b) (a)*50+(b)
#define pii pair<int,int>
using namespace std;

int d[4] = {-50, -1, 50, 1};

int main(){
	int r,c; cin >> r >> c;
	int sy,sx; cin >> sy >> sx;
	int start = pos(sx-1,sy-1);
	int gy,gx; cin >> gy >> gx;
	int goal = pos(gx-1,gy-1);
	char grid[2600];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin >> grid[pos(j,i)];
		}
	}
	queue<pii> q;
	bool footprint[2600] = {0};
	q.push(make_pair(0,start));
	while(!q.empty()){
		pii x = q.front();
		q.pop();
		//cout << x.first << " " << x.second << endl;
		if(footprint[x.second]) continue;
		footprint[x.second] = true;
		if(x.second == goal){
			cout << x.first << endl;
			break;
		}
		for(int i=0;i<4;i++){
			int dest = x.second + d[i];
			if(dest >= 2600 || dest < 0) continue;
			if(grid[dest] == '#') continue;
			if(footprint[dest]) continue;
			q.push(make_pair(x.first + 1, dest));
		}
	}
	
	return 0;
}