#include <bits/stdc++.h>
#define ld long double
#define at(m,n) m[(n)/502][(n)%502]

int d[4] = {-502,-1,1,502};

using namespace std;

int main(){
	cout << setprecision(20);
	priority_queue<pair<ld,int>> q;
	int n,m;
	char c[502][502];
	ld light[502][502] = {0.0};
	
	cin >> n >> m;
	
	memset(c,'#',502*502);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin >> c[i][j];
			if(c[i][j] == 'g'){
				q.push(make_pair(10.0, i*502+j));
				at(light,i*502+j) = 10.0;
			}
		}
	}
	
	while(!q.empty()){
		pair<ld,int> p = q.top();
		q.pop();
		if(at(c,p.second) == 's'){
			cout << p.first << endl;
			return 0;
		}
		if(at(light,p.second ) != p.first ) continue;
		for(int i=0;i<4;i++){
			int x = p.second+d[i];
			if(at(c,x) == '#') continue;
			ld ml = p.first*0.99;
			if(isdigit(at(c,x))) ml = min(ml,(ld)(at(c,x) - '0'));
			if(ml > at(light,x)){
				at(light,x) = ml;
				q.push(make_pair(ml,x));
			}
		}
	}
	
	cout << -1 << endl;
	return 0;
}