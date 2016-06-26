#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    n%=30;
    vector<int> v{1,2,3,4,5,6};
    for(int i=0;i<n;i++){
        swap(v[i%5],v[i%5+1]);
    }
    for(int i=0;i<6;i++){
        cout << v[i];
    }
    cout << endl;
    return 0;
}