#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <array>
#include <map>

using namespace std;

int main(){
	int n,d,k;
	int l[10001],r[10001];
	int s,t;
	cin >> n >> d >> k;
	for(int i=0;i<d;i++){
		cin >> l[i] >> r[i];
	}
	for(int i=0;i<k;i++){
		cin >> s >> t;
		for(int j=0;j<d;j++){
			if(l[j] <= s && r[j] >= s){
				if(l[j] <= t && r[j] >= t){
					cout << j+1 << endl;
					break;
				}
				if(s>t){
					s = l[j];
				} else {
					s = r[j];
				}
			}
		}
	}
	return 0;
}