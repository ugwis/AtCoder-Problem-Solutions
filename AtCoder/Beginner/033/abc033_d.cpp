#include <bits/stdc++.h>
using namespace std;
double EPS = 1e-10;

int main(){
        long long int n; cin >> n;
        vector<pair<int,int>> vertex;
        for(int i=0;i<n;i++){
                int x,y;
                cin >> x >> y;
                vertex.emplace_back(make_pair(x,y));
        }
        long long int obtuse = 0;
        long long int right = 0;

        for(int i=0;i<n;i++){
                vector<long double> edges;
                for(int j=0;j<n;j++){
                        if(i==j) continue;
                        long double rad = atan2(vertex[i].second - vertex[j].second, vertex[i].first - vertex[j].first);
                        //cout << i << " " << j << " " << rad*180/M_PI+180.0 << endl;
                        long double deg = rad*180.0/M_PI+180.0;
                        if(deg >= 360.0) deg-=360.0;
                        edges.emplace_back(deg);
                }
                sort(edges.begin(),edges.end());
                for(auto x=edges.begin();x!=edges.end();x++){
                        long double bgnrad = (*x)+90.0;
                        if(bgnrad >= 360.0) bgnrad-=360.0;
                        long double endrad = (*x)+180.0;
                        if(endrad >= 360.0) endrad-=360.0;
                        auto bgn = upper_bound(edges.begin(),edges.end(),bgnrad+EPS);
                        auto end = lower_bound(edges.begin(),edges.end(),endrad+EPS);
                        if(bgnrad > endrad){
                                obtuse += distance(edges.begin(),edges.end()) - distance(end,bgn);
                        } else {
                                obtuse += distance(bgn,end);
                        }

                        auto itbgn = lower_bound(edges.begin(),edges.end(),bgnrad-EPS);
                        auto itend = upper_bound(edges.begin(),edges.end(),bgnrad+EPS);
                        right+=distance(itbgn,itend);
                }
                //cout << endl;
        }

        long long int sum = n*(n-1)*(n-2)/6;
        cout << (sum-obtuse-right) << " " << right << " " << obtuse << endl;
        return 0;
}
