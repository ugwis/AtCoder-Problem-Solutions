#include <iostream>
#include <queue>

using namespace std;

int main(){
    int t,n,m;
    int a[101],b[101];
    cin >> t >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cin >> m;
    for(int i=0;i<m;i++){
        cin >> b[i];
    }
    int idx = 0;
    for(int i=0;i<n;i++){
        if(b[idx] - a[i] <= t && b[idx] - a[i] >= 0) idx++;
    }
    cout << (idx==m?"yes":"no") << endl;
    return 0;
}