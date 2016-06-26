#include <iostream>

using namespace std;

int main(){
    string s1("ICT"),s2("ict");
    string s;
    cin >> s;
    int k = 0;
    for(int signed i = 0;i<s.size();i++){
        if(s[i] == s1[k]|| s[i] == s2[k]){
            k++;
            if(k==3){
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}