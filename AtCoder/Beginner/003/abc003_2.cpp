#include <iostream>
#include <string>

using namespace std;

string s = "atcoder";

int main(){
    string a,b;
    bool flag = true;
    cin >> a;
    cin >> b;
    for(int signed i=0;i<a.size();i++){
        if(a[i] == b[i]) continue;
        else if(a[i] == '@'){
            if(s.find(b[i]) != string::npos) continue;
            else flag = false;
        } else if(b[i] == '@'){
            if(s.find(a[i]) != string::npos) continue;
            else flag = false;
        } else {
            flag = false;
        }
    }
    if(flag) cout << "You can win" << endl;
    else cout << "You will lose" << endl;
}
