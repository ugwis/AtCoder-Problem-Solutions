#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    vector<int> ng(3);
    cin >> n;
    for(int i=0;i<3;i++){
                cin >> ng[i];
                if(n == ng[i]) n+=300;
        }
    for(int i=0;i<100;i++){
                for(int j=3;j>0;j--){
            if(find(ng.begin(),ng.end(),n-j) == ng.end()){
                n-=j;
                break;
            }
        }
    }
        if(n <= 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    return 0;
}
