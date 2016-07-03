#include <iostream>
#include <stack>

using namespace std;

int main(){
	stack<char> c;
	for(int i=0;i<16;i++){
		char s;
		cin >> s;
		c.push(s);
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
		cout << c.top() << " ";
		c.pop();
		}
		cout << endl;
	}
	return 0;
}