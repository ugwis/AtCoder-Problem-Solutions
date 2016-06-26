#include <bits/stdc++.h>

#define EPS 10e-10
#define TARGET 100.0

using namespace std;

long double func(int a,int b,int c,long double t){
	return a*t+b*sin(c*t*M_PI);
}
/*
int main(){
	int a,b,c;
	cin >> a >> b >> c;
	cout << func(a,b,c,1.55243544063) << endl;
}
*/
int main(){
	int a,b,c;
	cin >> a >> b >> c;
	long double left=0.0,right=(TARGET+b)/a;
	long double center=(left+right)/2;
	while(1){
		long double ft = func(a,b,c,center);
		if(abs(ft - TARGET) < EPS){
			cout << setprecision(12);
			cout << center << endl;
			break;
		}
		if(ft >= TARGET) right=center;
		if(ft < TARGET) left=center;
		center=(left+right)/2;
	}
	return 0;
}
