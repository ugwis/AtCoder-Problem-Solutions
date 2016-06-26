#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
        int n,a,b,k;
        cin >> n;
        cin >> a >> b;
        cin >> k;
        vector<int> v;
        for(int i=0;i<k;i++){
                int p;
                cin >> p;
                if(p == a || p == b){
                        cout << "NO" << endl;
                        return 0;
                }
                if(find(v.begin(),v.end(),p) != v.end()){
                        cout << "NO" << endl;
                        return 0;
                }
                v.push_back(p);
        }
        cout << "YES" << endl;
        return 0;
}