        #include <bits/stdc++.h>
         
        using namespace std;
         
        int main(){
        	int x[3],y[3];
        	for(int i=0;i<3;i++) cin >> x[i] >> y[i];
        	for(int i=1;i<3;i++){x[i]-=x[0];y[i]-=y[0];}
            cout << setprecision(12);
        	cout << abs(x[1]*y[2] - y[1]*x[2])/2.0 << endl;
        	return 0;
        }