#include <iostream>
 
using namespace std;
 
int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    double e = (double)a/b - (double)c/d;
    if(e == 0.0) cout << "DRAW" << endl;
    if(e < 0.0) cout << "TAKAHASHI" << endl;
    if(e > 0.0) cout << "AOKI" << endl;
    return 0;
}