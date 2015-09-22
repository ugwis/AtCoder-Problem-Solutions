#include <iostream>
#include <queue>

using namespace std;

int dt[5] = { 0, -1 ,0 ,1 ,0};

int main(){
	int r,c,sx,sy,gx,gy;
	cin >> r >> c;
	cin >> sy >> sx;
	cin >> gy >> gx;
	char map[52][51];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin >> map[j][i];
		}
	}
	queue<pair<int,pair<int,int>>> q;
	q.push(make_pair(0,make_pair(sx-1,sy-1)));
	int ret = 0;
	while(!q.empty()){
		int n = q.front().first;
		int x = q.front().second.first,y = q.front().second.second;
		q.pop();
		if(x == gx-1 && y == gy-1){
			ret = n;
			break;
		}
		if(map[x][y] == '#') continue;
		
		for(int i=0;i<4;i++){
			int tx = x + dt[i], ty = y + dt[i + 1];
			if(tx < 0 || tx >= c) continue;
			if(ty < 0 || ty >= r) continue;
			q.push(make_pair(n+1,make_pair(tx,ty)));
		}
		map[x][y] = '#';
	}
	cout << ret << endl;
	return 0;
}
