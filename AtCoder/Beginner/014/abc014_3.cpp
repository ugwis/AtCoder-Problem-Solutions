#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    priority_queue<int,vector<int>, greater<int>> a,b;
    for(int i=0;i<n;i++){
            int ai,bi;
            cin >> ai >> bi;
            a.push(ai);
            b.push(bi);
    }
    int imos = 0,ans = 0;
    while(!b.empty()){
            if(a.empty()) b.pop();
            else if(a.top() <= b.top()){
                    imos++;
                    a.pop();
            } else if(a.top() > b.top()){
                    imos--;
                    b.pop();
            }
            ans = max(ans,imos);
    }
    cout << ans << endl;
    return 0;
}