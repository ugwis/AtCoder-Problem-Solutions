#include <bits/stdc++.h>

#define pds pair<double,string>

using namespace std;

int main(){
	int n,a,b,c,d,e,f,s,m,p;
	while(cin>>n,n){
		vector<pds> v;
		for(int i=n;i--;){
			string l;
			cin>>l>>p>>a>>b>>c>>d>>e>>f>>s>>m;
			a+=b+c+(d+e)*m,f*=s*m;
			v.push_back(make_pair(-1.0*(f-p)/a,l));
		}
		sort(v.begin(),v.end());
		for(auto i:v)cout<<i.second<<endl;
		cout<<"#"<<endl;
	}
	return 0;
}