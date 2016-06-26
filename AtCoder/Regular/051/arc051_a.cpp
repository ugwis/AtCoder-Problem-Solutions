#include <bits/stdc++.h>
 
using namespace std;
 
long double dist(int x1,int y1,int x2,int y2){
	return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}
 
int main(){
	int x1,y1,r;
	cin >> x1 >> y1 >> r;
	int x2,y2,x3,y3;
	cin >> x2 >> y2 >> x3 >> y3;
	if(x1-r >= x2 && x1+r <= x3 && y1-r >= y2 && y1+r <= y3){//circle in rect
		cout << "NO" << endl;
		cout << "YES" << endl;
	} else if(dist(x1,y1,x2,y2) <= r && dist(x1,y1,x2,y3) <= r && dist(x1,y1,x3,y2) <= r && dist(x1,y1,x3,y3) <= r) {//rect in circle
		cout << "YES" << endl;
		cout << "NO" << endl;
	} else {
		cout << "YES" << endl;
		cout << "YES" << endl;
	}
	return 0;
}