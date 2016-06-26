#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ans = 0;
    for(int i=0;i<n;i++){
        int m;
        cin >> m;
        if(m < 80) ans += 80 - m;
    }
    cout << ans << endl;
    return 0;
}