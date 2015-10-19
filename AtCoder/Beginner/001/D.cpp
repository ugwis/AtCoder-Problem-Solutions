#include <cstdio>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int folding(int time,bool e){
	int t = (int)(time / 100) * 60 + time % 100;
	t = (int)((t + 4 * e) / 5) * 5;
	return t / 60 * 100 + t % 60;
}
 
int main(){
	int n;
	scanf("%d", &n);
	vector<pair<int,int> > v;
	for(int i = 0; i < n; i++){
		int s, e;
		scanf("%d-%d", &s, &e);
		v.push_back(make_pair(folding(s, 0) , folding(e, 1)));
	}
	sort(v.begin(), v.end());
	pair<int, int> prev(v[0]);
	for(int unsigned i = 0; i < v.size(); i++){
		if(prev.second < v[i].first){
			printf("%04d-%04d\n", prev.first, prev.second);
			prev.first = v[i].first;
		}
		prev.second = max(prev.second, v[i].second);
	}
	printf("%04d-%04d\n", prev.first, prev.second);
	return 0;
}