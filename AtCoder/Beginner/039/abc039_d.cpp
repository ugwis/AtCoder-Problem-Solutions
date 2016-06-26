#include<bits/stdc++.h>
using namespace std;
int main(){
int h,w;cin >> h >> w;
bool d[102][102];
for(int i=0;i<h+2;i++) for(int j=0;j<w+2;j++) d[i][j]=1;
for(int i=0;i<h;i++){string s;cin >> s;for(int unsigned j=0;j<s.size();j++){if(s[j] == '.') d[i+1][j+1] =0;}}

bool output[102][102];
bool ans[102][102];
for(int i=0;i<h+2;i++) for(int j=0;j<w+2;j++) output[i][j]=ans[i][j]=0;

for(int i=0;i<h;i++) for(int j=0;j<w;j++){int s = 0;
for(int hh=0;hh<3;hh++) for(int l=0;l<3;l++) s += d[i+hh][j+l];
if(s == 9){for(int hh=0;hh<3;hh++) for(int l=0;l<3;l++) output[i+hh][j+l]=1;
ans[i+1][j+1]=1;
}
}

bool flag=true;
for(int i=1;i<=h;i++) for(int j=1;j<=w;j++) if(d[i][j] != output[i][j]) flag =false;
if(!flag){cout << "impossible" << endl;return 0;}
cout << "possible"<<endl;
for(int i=1;i<=h;i++){for(int j=1;j<=w;j++) if(ans[i][j]) cout << "#";else cout<<".";
cout << endl;
}


return 0;
}