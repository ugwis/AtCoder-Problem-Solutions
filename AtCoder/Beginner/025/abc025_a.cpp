#include <iostream> 

using namespace std;

int main(){
    string s;
    int n;
    cin >> s;
    cin >> n;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i*5+j == n-1){
                cout << s[i] << s[j] << endl;
            }
        }
    }
    return 0;
}