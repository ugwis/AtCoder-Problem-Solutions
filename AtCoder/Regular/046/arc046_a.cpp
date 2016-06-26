#include<iostream>
using namespace std;int main(){int n,i;cin>>n;for(i=(n+8)/9;i--;)cout<<(n-1)%9+1;cout<<endl;return 0;}