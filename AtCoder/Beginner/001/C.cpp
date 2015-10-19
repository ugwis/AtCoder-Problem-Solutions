#include <iostream>
#include <string>
 
using namespace std;
 
string s[] = {"N","NNE","NE","ENE","E","ESE","SE","SSE","S","SSW","SW","WSW","W","WNW","NW","NNW"};
 
int w[] = {-1,2,15,33,54,79,107,138,171,207,244,284,326,2000};
 
int main(){
	int deg,dis;
	cin >> deg >> dis;
	if(dis < 15) cout << "C";
	else cout << s[((deg*10+1125)/2250)%16];
	dis = dis/6.0 + 0.5;
	cout << " ";
	for(int i=0;i<13;i++){
		if(dis >= w[i]+1 && dis <= w[i+1]) cout << i << endl;
	}
	return 0;
}