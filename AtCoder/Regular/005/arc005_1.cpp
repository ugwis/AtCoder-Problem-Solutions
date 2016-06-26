#include <iostream>

using namespace std;

int main(){
	string s[3] = {"TAKAHASHIKUN","Takahashikun","takahashikun"};
	int n;
	int res=0;
	cin >> n;
	for(int i=0;i<n;i++){
		string w;
		cin >> w;
		
		for(int j=0;j<3;j++){
			if(s[j] == w) res++;
			else if(i == n-1 && s[j]+"." == w) res++;
		}
	}
	cout << res << endl;
	return 0;
}