#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n,a,b;
    cin >> n >> a >> b;
    int c = 0;
    for(int i=0;i<n;i++){
        string s;
        int d;
        cin >> s >> d;
        d = max(a,d);
        d = min(b,d);
        if(s == "East") c += d;
        if(s == "West") c -= d;
    }
    if(c > 0) cout << "East ";
    if(c < 0) cout << "West ";
    cout << abs(c) << endl;
}