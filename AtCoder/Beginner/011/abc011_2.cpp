#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main(){
        string s;
        cin >> s;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        transform(s.begin(),s.begin()+1,s.begin(),::toupper);
        cout << s << endl;
        return 0;
}