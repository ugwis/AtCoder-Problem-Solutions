#include <bits/stdc++.h>
#define pii pair<int,int>
using namespace std;
int main(){
    int n;
    while(cin >> n,n){
        vector<pii> v;
        v.emplace_back(make_pair(-1,1000000000));
        for(int i=0;i<n;i++){
            char c;cin >> c;
            if(c == 'W'){
                int i,s;cin >> i >> s;
                for(auto it=v.begin();it!=v.end();it++){
                    if(it->first == -1){
                        if(s <= it->second){
                            it->second -= s;
                            v.insert(it,make_pair(i,s));
                            break;
                        } else {
                            it->first=i;
                            s -= it->second;
                        }
                    }
                }
            }
            if(c == 'D'){
                int i;cin >> i;
                for(auto it=v.begin();it!=v.end();it++){
                    if(it->first == i) it->first = -1;
                }
            }
            if(c == 'R'){
                int p;cin >> p;
                int i=0;
                auto it=v.begin();
                for(;it!=v.end();it++){
                    i += it->second;
                    if(p < i){
                        cout << it->first << endl;
                        break;
                    }
                }
                if(it == v.end()) cout << -1 << endl;
            }
        }
        cout << endl;
    }
    return 0;
}
