#include<cstdio>
using namespace std;
 
int main(){
    int m;
    scanf("%d",&m);
    if(m < 100) printf("00\n");
    else if(m >= 100 && m <= 5000) printf("%02d\n",(m*10)/1000);
    else if(m >= 6000 && m <= 30000) printf("%02d\n",m/1000+50);
    else if(m >= 35000 && m <= 70000) printf("%02d\n",(m/1000-30)/5+80);
    else if(m > 70000) printf("89\n");
    return 0;
}