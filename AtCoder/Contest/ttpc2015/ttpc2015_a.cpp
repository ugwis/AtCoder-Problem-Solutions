#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int n;
	char c;
	scanf("%d%c",&n,&c);
	if(c == 'B') cout << "Bachelor";
	if(c == 'M') cout << "Master";
	if(c == 'D') cout << "Doctor";
	printf(" %02d\n",n);
	return 0;
}