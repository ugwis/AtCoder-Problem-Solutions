#include <bits/stdc++.h>
using namespace std;

int main(){
	int a[4][4];
	for(int i = 0;i<4;i++){
		for(int j=0;j<4;j++){
			cin >> a[i][j];
		}
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			if(a[i][j] == a[i][j+1]){
				cout << "CONTINUE" << endl;
				return 0;
			}
			if(a[j][i] == a[j+1][i]){
				cout << "CONTINUE" << endl;
				return 0;
			}
		}
	}
	cout << "GAMEOVER" << endl;
	return 0;
}