#include <iostream>
using namespace std;
int main(){
    int x,y,k;
    cin >> x >> y;
    cin >> k;
    if(y < k){
        cout << ( y + x - (k - y)) << endl;
    } else {
        cout << (x + k) << endl;
    }
    return 0;
}