#include <iostream>

using namespace std;

int main(){
        string str;
        cin >> str;
        str[str.size()-1]='5';
        cout << str << endl;
        return 0;
}
