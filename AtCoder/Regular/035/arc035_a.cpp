#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    for(int unsigned i=0;i<s.size();i++){
        if(s[i] != s[s.size()-i-1]){
            if(s[i] != '*' && s[s.size()-i-1] != '*'){
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl;
    return 0;
}