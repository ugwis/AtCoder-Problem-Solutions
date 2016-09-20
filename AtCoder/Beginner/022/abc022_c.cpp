#include <bits/stdc++.h>

const int INF = 100000000;

using namespace std;

int main(){
        int n,m;
        cin >> n >> m;
        vector<vector<int>> edge(n+1,vector<int>(n+1,INF));
        for(int i=0;i<n+1;i++) edge[i][i] = 0;
        int u,v,l;
        for(int i=0;i<m;i++){
                cin >> u >> v >> l;
                edge[u][v] = edge[v][u] = l;
        }
        // warshall_floyd
        for(int i=2;i<=n;i++){
                for(int j=2;j<=n;j++){
                        for(int k=2;k<=n;k++){
                                edge[j][k] = min(edge[j][k], edge[j][i] + edge[i][k]);
                        }
                }
        }

        int ans = INF;
        for(int i=2;i<=n;i++){
                for(int j=2;j<=n;j++){
                        if(i==j) continue;
                        ans = min(ans, edge[1][i] + edge[i][j] + edge[j][1]);
                }
        }

        cout << (ans<INF?ans:-1) << endl;

        return 0;
}
