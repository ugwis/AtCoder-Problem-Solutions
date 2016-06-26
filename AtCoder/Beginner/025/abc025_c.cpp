#include <bits/stdc++.h>
using namespace std;
int b[2][3];
int c[3][2];

int table[3][3];

int hyoka(){
	int ret = 0;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(i < 2){
				if(table[i][j] == table[i+1][j]){
					ret += b[i][j];
				}
			}
			if(j < 2){
				if(table[i][j] == table[i][j+1]){
					ret += c[i][j];
				}
			}
		}
	}
	return ret;
}

int chokudai;
int naoko;

int dfs(int turn){
	if(turn == 9){
		return hyoka();
	}
	int best;
	if(turn%2==0) best = 0;
	else best = 1200;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(table[i][j]) continue;
			table[i][j] = turn%2+1;
			int score = dfs(turn+1);
			if(turn%2 == 0){
				best = max(best,score);
			} else {
				best = min(best,score);
			}
			table[i][j] = 0;
		}
	}
	return best;
}

int main(){
	int sum=0;
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cin >> b[i][j];
			sum+=b[i][j];
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			cin >> c[i][j];
			sum+=c[i][j];
		}
	}
	int score = dfs(0);
	cout << score << endl;
	cout << sum - score << endl;
	return 0;
}