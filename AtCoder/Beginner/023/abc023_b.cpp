#include <iostream>
#include <string>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    int n;
    string str;
    
    cin >> n;
    cin >> str;
    
    string s[100];
    s[0] = "b";
    for(int i=1;i<100;i++){
        if(i%3==1){
            s[i] = "a" + s[i-1] + "c";
        } else if(i%3==2){
            s[i] = "c" + s[i-1] + "a";
        } else if(i%3==0){
            s[i] = "b" + s[i-1] + "b";
        }    
    }
    
    if(s[(n-1)/2] == str){
        cout << (n-1)/2 << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}