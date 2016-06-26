#include <iostream>
#include <string>
using namespace std;

int main(){
	int n,m,a,b;
	cin >> n >> m >> a >> b;
	for(int i=0;i<m;i++){
		if(n < 0){
			cout << i << endl;
			return 0;
		}
		if(n <= a){
			n+=b;
		}
		int c;
		cin >> c;
		n-=c;
	}
	if(n < 0){
		cout << m << endl;
	} else {
		cout << "complete" << endl;
	}
	return 0;
}