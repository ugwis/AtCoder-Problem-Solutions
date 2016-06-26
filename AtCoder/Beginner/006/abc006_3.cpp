#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int a[3] = {0,n,0};
    while(1){
        int x = a[0]*2 + a[1]*3 + a[2]*4;
        if(x == m){
            cout << a[0] << " " << a[1] << " " << a[2] << endl;
            break;
        }
        if(a[1] <= 0){
            cout << "-1 -1 -1" << endl;
            break;
        }
        if(x > m){
            a[1]--;
            a[0]++;
        }
        if(x < m){
            a[1]--;
            a[2]++;
        }
    }
    return 0;
}