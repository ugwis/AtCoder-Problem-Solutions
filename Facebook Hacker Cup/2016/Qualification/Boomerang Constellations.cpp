#include <iostream>
#include <map>
#include <vector>
#include <cmath>

using namespace std;

double distance(int x1,int y1,int x2,int y2){
return sqrt(pow((double)(x1 - x2),2.0) + pow((double)(y1 - y2),2.0));
}

int sig(int a){
if(a == 0) return 0;
return a+sig(a-1);
}

int main(){
int t;
cin >> t;
for(int i = 0; i < t; i++){
int n;
vector<pair<int, int> > v;
cin >> n;
// O(n)
for(int i = 0; i < n; i++){
int x,y;
cin >> x >> y;
v.push_back(make_pair(x, y));
}

long long int ans = 0;
// O(n)
for(int unsigned i = 0; i < v.size(); i++){
map<double,int> mp;
for(int unsigned j = 0; j < v.size(); j++){
double dis = distance(v[i].first, v[i].second, v[j].first, v[j].second);
if(mp.find(dis) != mp.end()) mp[dis]++;
else mp[dis] = 1;
}
for(map<double,int>::iterator it = mp.begin();it != mp.end(); it++){
ans += sig(it->second-1);
}
}
cout << "Case #" << i+1 << ": " << ans << endl;
}
return 0;
}
