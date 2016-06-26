#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int d[4] = {1,2,4,8};

int main(){
int n;
cin >> n;
vector<int> v;
for(int i=3;i>=0;i--){
while(n>=d[i]){
n-=d[i];
v.push_back(d[i]);
}
}
sort(v.begin(),v.end());
cout << v.size() << endl;
for(int i=0;i<v.size();i++){
cout << v[i] << endl;
}
return 0;
}