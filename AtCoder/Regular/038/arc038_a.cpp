#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n,a[1000];
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n,greater<int>());
    int ret = 0;
    for(int i=0;i<n;i+=2){
        ret += a[i];
    }
    cout << ret << endl;
    return 0;
}