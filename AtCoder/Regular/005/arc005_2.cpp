#include <iostream>
 
using namespace std;
 
string s[8] = {"R","L","U","D","RU","RD","LU","LD"};
int dx[8] = {1,-1,0,0,1,1,-1,-1};
int dy[8] = {0,0,-1,1,-1,1,-1,1};
 
int main(){
	int x,y;
	string w;
	cin >> x >> y >> w;
	char c[9][9];
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			cin >> c[i][j];
		}
	}
	x--,y--;
	int dX,dY;
	for(int i=0;i<8;i++) if(s[i] == w) dX = dx[i], dY = dy[i];
	for(int i=0;i<4;i++){
		cout << c[y][x];
		x+=dX,y+=dY;
		if(x == -1 || x == 9) dX*=-1,x+=2*dX;
		if(y == -1 || y == 9) dY*=-1,y+=2*dY;
	}
	cout << endl;
	return 0;
}