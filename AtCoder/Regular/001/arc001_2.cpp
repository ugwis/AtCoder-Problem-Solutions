#include <iostream>
#include <queue>

using namespace std;

int d[6] = {-10, -5, -1, 1, 5, 10};

int main(){
	int a,b;
	cin >> a >> b;
	queue<pair<int,int>> q;
	q.push(make_pair(0, a));
	while(1){
		if(q.front().second == b){
			cout << q.front().first << endl;
			break;
		}
		for(int i=0;i<6;i++){
			q.push(make_pair(q.front().first + 1, q.front().second + d[i]));
		}
		q.pop();
	}
	return 0;
}