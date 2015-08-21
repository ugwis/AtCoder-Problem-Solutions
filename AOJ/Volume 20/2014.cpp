#include <iostream>
using namespace std;
int w, h;
char cc,a[50][50];
bool flag[50][50];
int dd[5]={0,-1,0,1,0};
int dfs(int x,int y,char c){
	if (x<0||x>=w||y<0||y>= h||flag[x][y])return 0;
	if(a[x][y]==c)return (cc=c,0);
	if(a[x][y]!='.')return -1;
	flag[x][y]=1;
	int ret=1;
	for(int i=0;i<4;i++){
		int cs=dfs(x+dd[i],y+dd[i+1],c);
		if(cs==-1)ret=-1;
		if(ret>0)ret+=cs;
	}
	return ret;
}
int main(){
	while(cin>>w>>h,w){
		for(int i=0;i<h*w;i++){
			flag[i%w][i/w]=false;
			cin>>a[i%w][i/w];
		}
		char c[3]="BW";
		for(int k=0;k<2;k++){
			int r=0;
			for(int i=w*h;i--;)flag[i%w][i/w]=0;
			for(int i=w*h;i--;){
				cc='N';
				int a=dfs(i%w,i/w,c[k]);
				r+=(a>0&&cc==c[k])?a:0;
			}
			cout<<r<<(k?"":" ");
		}
		cout<<endl;
	}
	return 0;
}