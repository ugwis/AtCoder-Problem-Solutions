#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n, m;
	while (cin >> n >> m, n){
		vector<int> w, h;
		int ws = 0, hs = 0;
		h.push_back(0);
		for (int i = 0; i < n; i++){
			int hi;
			cin >> hi;
			h.push_back(hs += hi);
		}
		w.push_back(0);
		for (int i = 0; i < m; i++){
			int wi;
			cin >> wi;
			w.push_back(ws += wi);
		}
		vector<int> diag(ws + hs + 1);
		for (int unsigned i = 0; i < h.size(); i++){
			for (int unsigned j = 0; j < w.size(); j++){
				diag[h[i] + w[j]]++;
			}
		}
		int ret = 0;
		for (int unsigned i = 0; i < diag.size(); i++){
			ret += diag[i]*(diag[i]-1)/2;
		}
		cout << ret << endl;
	}
	return 0;
}