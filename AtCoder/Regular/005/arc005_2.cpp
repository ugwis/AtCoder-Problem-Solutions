#include <iostream>
 
using namespace std;
 
int main(){
	int x,y;
	string w;
	cin >> x >> y >> w,x--,y--;
	char c[9][9];
	int dx=0,dy=0;
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			cin >> c[i][j];
		}
	}
	for(int unsigned i=0;i<w.size();i++){
		if(w[i] == 'R') dx++;
		if(w[i] == 'L') dx--;
		if(w[i] == 'U') dy--;
		if(w[i] == 'D') dy++;
	}
	for(int i=0;i<4;i++){
		cout << c[y][x];
		x+=dx,y+=dy;
		if(x == -1 || x == 9) dx*=-1,x+=2*dx;
		if(y == -1 || y == 9) dy*=-1,y+=2*dy;
	}
	cout << endl;
	return 0;
}