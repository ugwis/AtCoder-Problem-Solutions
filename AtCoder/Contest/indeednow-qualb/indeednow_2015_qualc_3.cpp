#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> v[100001];
priority_queue<int, vector<int>, greater<int> > su;
int n;

int main() {
	cin >> n;
	for(int i=0;i<n-1;i++){
		int a,b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	su.push(1);
	for(int c=0;1;c++){
		if(su.size()==0) break;
		int s = su.top();
		su.pop();
		vector<int> vi = v[s];
		for(int i=0;i<vi.size();i++){
			su.push(vi[i]);
			v[vi[i]].erase(remove(v[vi[i]].begin(),v[vi[i]].end(),s),v[vi[i]].end());
		}
		if(c!=0) cout << " "; 
		cout << s;
	}
	cout << endl;
	return 0;
}