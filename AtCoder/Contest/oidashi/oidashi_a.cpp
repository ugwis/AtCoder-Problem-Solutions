#include <bits/stdc++.h>
using namespace std;
 
int h,w;
int d[5] = {0,-1,0,1,0};
 
vector<string> board;
 
void bfs(int sx,int sy,int data[298][298]){
	for(int i=0;i<298;i++) for(int j=0;j<298;j++) data[i][j] = 298*298;
	queue<pair<int,pair<int,int>>> pq;
	pq.push(make_pair(0,make_pair(sx,sy)));
	while(!pq.empty()){
		pair<int,pair<int,int>> x = pq.front();
		pq.pop();
		if(data[x.second.second][x.second.first] <= x.first) continue;
		data[x.second.second][x.second.first] = x.first;
		for(int i=0;i<4;i++){
			if(x.second.first + d[i] < 0) continue;
			if(x.second.first + d[i] >= w) continue;
			if(x.second.second + d[i+1] < 0) continue;
			if(x.second.second + d[i+1] >= h) continue;
			if(board[x.second.second + d[i+1]][x.second.first + d[i]] == '#') continue;
			pq.push(make_pair(x.first+1,make_pair(x.second.first + d[i],x.second.second + d[i+1])));
		}
	}
}
 
int main(){
	cin >> h >> w;
	int sx,sy,gx,gy;
	for(int i=0;i<h;i++){
		string s;
		cin >> s;
		for(int unsigned j = 0;j<s.size();j++){
			if(s[j] == 'S'){
				sx = j;
				sy = i;
			}
			if(s[j] == 'G'){
				gx = j;
				gy = i;
			}
		}
		board.emplace_back(s);
	}
	int sd[298][298];
	int gd[298][298];
	int ed[298][298];
	bfs(sx,sy,sd);
	bfs(gx,gy,gd);
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			ed[i][j] = min(sd[i][j],gd[i][j]);
			if(ed[i][j] == 298*298) ed[i][j] = -1;
		}
	}
	int ans = 0;
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			//cout << ed[i][j] << "\t";
			if(board[i][j] == '#'){
			int ka = 298*298;
			for(int k=0;k<4;k++){
				if(i+d[k] < 0) continue;
				if(i+d[k] >= h) continue;
				if(j+d[k+1] < 0) continue;
				if(j+d[k+1] >= w) continue;
				for(int l=k+1;l<4;l++){
					if((gd[i+d[k]][j+d[k+1]] == 298*298 || sd[i+d[l]][j+d[l+1]] == 298*298 )
					&&( sd[i+d[k]][j+d[k+1]] == 298*298 || gd[i+d[l]][j+d[l+1]] == 298*298)) continue;
					if(ed[i+d[k]][j+d[k+1]] == -1) continue;
					if(ed[i+d[l]][j+d[l+1]] == -1) continue;
					if(i+d[l] < 0) continue;
					if(i+d[l] >= h) continue;
					if(j+d[l+1] < 0) continue;
					if(j+d[l+1] >= w) continue;
					ka = min(ka,ed[i+d[k]][j+d[k+1]] + ed[i+d[l]][j+d[l+1]]);
				}
			}
			if(ka!=298*298) ans = max(ans,ka);
			}
			//cout << ans << "\t";
		}
		//cout << endl;
	}
	cout << ans+2 << endl;
	return 0;
}