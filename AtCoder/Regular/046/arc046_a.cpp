#include<stdio.h>
int main(){int n,i;scanf("%d",&n);for(i=(n+8)/9;i--;)printf("%d",(n-1)%9+1);printf("\n");return 0;}