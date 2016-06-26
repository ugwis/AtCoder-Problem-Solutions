#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> v(n+1);
    
    for(int i=0;i<m;i++){
        int x,y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    int ans = 1;
    for(int s=0;s<pow(2,n+1);s++){
        bitset<32> t(s);
        if(t.count() <= ans) continue;
        
        bool tf = true;
        for(int i=0;i<=n;i++){
            if(!t[i]) continue;
            if(!tf) break;
            for(int j=0;j<=n;j++){
                if(!t[j]) continue;
                if(i == j) continue;
                //cout << i << " " << j << endl;
                if(find(v[i].begin(),v[i].end(),j) == v[i].end()){
                    tf = false;
                    break;
                }
            }
        }
        if(tf){
            ans = t.count();
        }
    }
    cout << ans << endl;
    
    return 0;
}