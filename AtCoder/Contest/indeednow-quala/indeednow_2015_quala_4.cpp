#include <iostream>
#include <algorithm>

using namespace std;

int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, -1, 0, 1 };

int h, w;
int c[7][7];

int ans = 24;

int remain(){
	int ret = 0;
	for (int i = 0; i<h; i++){
		for (int j = 0; j<w; j++){
			if (c[i][j] == 0){
				continue;
			}
			int r = abs(i - (c[i][j] - 1) / w) + abs(j - (c[i][j] - 1) % w);
			ret += r;
		}
	}
	return ret;
}

void a_star(int t, int x, int y){
	int r = remain();
	if (t + r >= ans) return;
	if (r == 0){
		ans = min(ans,t);
		return;
	}
	for (int i = 0; i<4; i++){
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx<0 || nx >= w || ny<0 || ny >= h) continue;
		swap(c[y][x], c[ny][nx]);
		a_star(t + 1, nx, ny);
		swap(c[y][x], c[ny][nx]);
	}
	return;
}

int main(){
	cin >> h >> w;
	int sx, sy;
	for (int i = 0; i<h; i++){
		for (int j = 0; j<w; j++){
			cin >> c[i][j];
			if (c[i][j] == 0){
				sx = j;
				sy = i;
			}
		}
	}
	a_star(0, sx, sy);
	cout << ans << endl;
	return 0;
}