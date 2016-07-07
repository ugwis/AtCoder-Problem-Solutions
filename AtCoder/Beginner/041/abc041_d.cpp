/*#include <bits/stdc++.h>

using namespace std;

class UnionFind {
private:
	vector<int> v;
public:
	UnionFind(int n) {
		for (int i = 0; i < n+1; i++) v.emplace_back(-1);
	}
	int root(int x) {
		return v[x] < 0 ? x : root(v[x]);
	}
	void unite(int x, int y) {
		if (root(x) == root(y)) {
			return;
		}
		v[root(x)] = root(y);
	}
	bool same(int x, int y) {
		return root(x) == root(y);
	}
	void cut(int x, int y) {
		if (v[x] == y) v[x] = -1;
		if (v[y] == x) v[y] = -1;
	}
};

int main() {
	int n, m, s;
	cin >> n >> m >> s;
	UnionFind uf(n);
	vector<pair<int, int>> vp;
	vector<vector<int>> edge(n+1);
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		edge[u].emplace_back(v);
		edge[v].emplace_back(u);
		uf.unite(u, v);
		vp.emplace_back(make_pair(u, v));
	}
	for (int i = 1; i <= n; i++) {
		for (int unsigned j = 0; j < edge[i].size(); j++) {
			uf.cut(i, edge[i][j]);
		}
		if (uf.same(s, i)) {
			cout << i << endl;
		}
	}
	return 0;
}*/
/*
#include <bits/stdc++.h>
using namespace std;
int main() {
	string n;
	int idx = 0;
	while (cin >> n, n!="0") {
		if (n[idx] == '-') idx++;
		if (idx + 1 < n.size() && n[idx+1] != '0'){
			;
		}
		
	}
	return 0;
}*/
/*
#include <bits/stdc++.h>
using namespace std;

int func(int num) {
	int ret=0;
	int length = (int)log10(abs(num))+1;
	cout << length << endl;
	for (int i = length - 1; i >= 0; i--) {
		int x = (int)(num / pow(10, i)) % 10;
		if()
		num - x*pow(10,i)
		ret += ((int)(num / pow(10, i)) % 10) * pow(-10, i);
	}
	return ret;
}

int main() {

	int n;
	while (cin >> n, n != 0) {
		for (int i = 31; i >= 0; i--) {
			pow(10,i)
		}
	}
	cout << func(-1944) << endl;
	return 0;
}*/
#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> edge(n);
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		edge[y-1].emplace_back(x-1);
	}
	vector<lli> dp(1 << n,0);
	for (int i = 0; i < n; i++) if (edge[i].size() == 0) dp[1 << i] = 1LL;
	for (int i = 0; i < (1 << n)-1; i++) {
		for (int j = 0; j < n; j++) {
			if (i & (1 << j)) continue;
			bool flag = false;
			for (int unsigned k = 0; k < edge[j].size(); k++) {
				if (~i & (1 << edge[j][k])) flag = true;
			}
			if (flag) continue;
			dp[i | (1 << j)] += dp[i];
		}
	}
	cout << dp[(1 << n) - 1] << endl;
	return 0;
}