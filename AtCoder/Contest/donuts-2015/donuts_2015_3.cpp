#include <iostream>
#include <stack>
#include <algorithm>
 
using namespace std;
 
int main(){
	int n;
	cin >> n;
	stack<int> s;
	s.push(1000000);
	for(int i=0;i<n;i++){
		int h;
		cin >> h;
		cout << s.size() - 1 << endl;
		while(s.top() < h) s.pop();
		s.push(h);
	}
	return 0;
}