#include <iostream>
#include <string>
#include <cmath>

using namespace std;
 
int main(){
	int max=-1000;
	int a,b;
	cin >> a >> b;
	int aa[3],bb[3];
	for(int i=0;i<3;i++){
		aa[i] = a%10;
		a/=10;
		bb[i] = b%10;
		b/=10;
	}
	int aaa[4],bbb[4];
	aaa[0] = aa[2]*100 + aa[1]*10 + aa[0];
	aaa[1] = 9*100 + aa[1]*10 + aa[0];
	aaa[2] = aa[2]*100 + 9*10 + aa[0];
	aaa[3] = aa[2]*100 + aa[1]*10 + 9;
	bbb[0] = bb[2]*100 + bb[1]*10 + bb[0];
	bbb[1] = 1*100 + bb[1]*10 + bb[0];
	bbb[2] = bb[2]*100 + 0*10 + bb[0];
	bbb[3] = bb[2]*100 + bb[1]*10 + 0;
	for(int i=0;i<4;i++){
		if(aaa[i] - bbb[0] > max){
			max = aaa[i] - bbb[0];
		}
	}
	for(int i=0;i<4;i++){
		if(aaa[0] - bbb[i] > max){
			max = aaa[0] - bbb[i];
		}
	}
	cout << max << endl;
	return 0;
}