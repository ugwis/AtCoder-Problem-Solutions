#include <bits/stdc++.h>

using namespace std;

int main(){
        int n;
        cin >> n;

        map<int,vector<int>> mp;
        for(int i=0;i<n;i++){
                int a;
                cin >> a;
                mp[a].push_back(i);
        }

        int r = 0;
        int p = -1;
        for(auto pp : mp){
                int q = pp.second.front();
                if(q < p){
                        r++;
                        for(auto x : pp.second) if(x < p){
                                q = x;
                        }
                        p = q;
                } else {
                        p = pp.second.back();
                }
        }
        if(p) r++;
        cout << r << endl;
        return 0;
}