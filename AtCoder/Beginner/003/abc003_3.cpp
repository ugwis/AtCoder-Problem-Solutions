#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int r[100];
    for(int i=0;i<n;i++){
        cin >> r[i];
    }
    sort(r,r + n);
    long double c = 0;
    for(int i=n-k;i<n;i++){
        c = (c + r[i])/2;
    }
    cout << setprecision(20);
    cout << c << endl;
    return 0;
}