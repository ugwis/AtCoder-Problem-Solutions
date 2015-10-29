#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
char c[8][8];
 
bool check(){
	vector<int> ver,hor,lef,rig;
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			if(c[j][i] == 'Q'){
				if(find(ver.begin(),ver.end(),i) != ver.end()) return false;
				if(find(hor.begin(),hor.end(),j) != hor.end()) return false;
				if(find(lef.begin(),lef.end(),i + j) != lef.end()) return false;
				if(find(rig.begin(),rig.end(),i - j) != rig.end()) return false;
				ver.push_back(i);
				hor.push_back(j);
				lef.push_back(i + j);
				rig.push_back(i - j);
			}
		}
	}
	return true;
}
 
bool dfs(int x,int y,int deep){
	if(!check()){
		return false;
	};
	if(deep == 8 && check()){
		for(int i=0;i<8;i++){
			for(int j=0;j<8;j++){
				cout << c[j][i];
			}
			cout << endl;
		}
		return true;
	}
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			if(c[j][i] == '.'){
				c[j][i] = 'Q';
				if(dfs(j,i,deep+1)) return true;
				c[j][i] = '.';
			}
		}
	}
	return false;
}
 
int main(){
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			cin >> c[j][i];
		}
	}
	if(!dfs(0,0,3)) cout << "No Answer" << endl;
	return 0;
}
