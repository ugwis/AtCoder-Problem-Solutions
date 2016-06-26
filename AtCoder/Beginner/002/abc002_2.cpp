#include <iostream>
#include <string>
using namespace std;
int main(){
string s;
cin >> s;
for(int unsigned i=0;i<s.size();i++){
if(s[i] != 'a' && s[i] != 'i' && s[i] != 'u' && s[i] != 'e' && s[i] != 'o') cout << s[i];
}
cout << endl;
return 0;
}