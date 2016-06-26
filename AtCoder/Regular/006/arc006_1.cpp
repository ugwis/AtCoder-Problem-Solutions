#include <bits/stdc++.h>

using namespace std;

int main(){
        int b;
        int dp[10] = {0};
        for(int i=0;i<6;i++){
                int e;
                cin >> e;
                dp[e]++;
        }
        cin >> b;
        bool bonus = false;
        for(int i=0;i<6;i++){
                int l;
                cin >> l;
                dp[l]++;
                if(b==l) bonus=true;
        }
        int c = count(dp,dp+10,2);
        if(c == 6) cout << 1 << endl;
        else if(c == 5){
                if(bonus) cout << 2 << endl;
                else cout << 3 << endl;
        } else if(c>=3){
                cout << (8-c) << endl;
        } else {
                cout << 0 << endl;
        }
        return 0;
}
