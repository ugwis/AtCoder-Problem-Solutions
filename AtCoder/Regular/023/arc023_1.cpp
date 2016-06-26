#include <bits/stdc++.h>
using namespace std;

int calc(int y,int m,int d){
	if(m <= 2){
		m+=12;
		y--;
	}
	return 365*y + y/4 - y/100 + y/400 + (306*(m+1))/10 + d - 429;
}

int main(){
	int y,m,d;
	cin >> y >> m >> d;
	cout << (calc(2014,5,17) - calc(y,m,d)) << endl;
	return 0;
}