#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
 
using namespace std;
 
char d[4] = {'A', 'B', 'X', 'Y'};
 
int main(){
	int n;
	cin >> n;
	string c;
	cin >> c;
	
	vector<string> v;
		
	for(auto i : d){
		for(auto j : d){
			v.emplace_back(string("") + i + j);
		}
	}
						
							
	int ans = 1000;
	for(string a : v){
		for(string b : v){
			int r = 0;
			for(int i=0;i<n;i++){
				if(c.substr(i,2) == a || c.substr(i,2) == b) i++;
				r++;
			}
			ans = min(ans,r);
		}
	}
	cout << ans << endl;
	return 0;
}
