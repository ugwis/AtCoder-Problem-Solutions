#include <bits/stdc++.h>

using namespace std;

// http://purple-jwl.hatenablog.com/entry/20140802/1406992244からクラス定義借りました
class UnionFindTree {
private:
  int nodeSize;
  vector<int> parent;
  vector<int> rank;
  vector<int> treeSize;

public:
  UnionFindTree(int ns) {
    nodeSize = ns;
    parent = vector<int>(nodeSize); // 親の要素の番号
    rank = vector<int>(nodeSize, 0); // 木の深さ
    treeSize = vector<int>(nodeSize, 1); // 木の要素数

    for(int i = 0; i < nodeSize; i++) {
      parent[i] = i;
    }
  }

  ~UnionFindTree() {}
  
  // 木の根（親の要素）を求める
  int find(int x) {
    if(parent[x] == x) {
      return x;
    }
    else {
      return parent[x] = find(parent[x]);
    }
  }

  // xとyの属する集合を併合(できたならtrueを返す)
  bool unite(int x, int y) {
    x = find(x);
    y = find(y);
    
    if(x == y) {
      return false;
    }
    
    if(rank[x] < rank[y]) {
      parent[x] = y;
      treeSize[y] += treeSize[x];
    }
    else {
      parent[y] = x;
      treeSize[x] += treeSize[y];
      if(rank[x] == rank[y]) {
        rank[x]++;
      }
    }

    return true;
  }

  // xとyが同じ集合に属するかどうか
  bool same(int x, int y) {
    return find(x) == find(y);
  }

  // 集合の要素数を得る
  int getSize(int x) {
    return treeSize[find(x)];
  }
};

int main(){
	int n;
	string s1,s2;

	UnionFindTree UF(101);

	cin >> n;
	cin >> s1 >> s2;

	for(int i=0;i<n;i++){
		if(isdigit(s1[i]) && isdigit(s2[i])) continue;
		if(isdigit(s1[i])){
			UF.unite(100, s2[i] - 'A');
		} else if(isdigit(s2[i])){
			UF.unite(100, s1[i] - 'A');
		} else {
			UF.unite(s1[i] - 'A', s2[i] - 'A');
		}
	}

	set<int> roots;
	bool isContainFirstCharacter = false;

	for(int i=0;i<n;i++){
		if(!isdigit(s1[i]) && !UF.same(100,s1[i] - 'A')){
			roots.insert(UF.find(s1[i] - 'A'));
			if(i == 0) isContainFirstCharacter = true;
		}
		if(!isdigit(s2[i]) && !UF.same(100,s2[i] - 'A')){
			roots.insert(UF.find(s2[i] - 'A'));
			if(i == 0) isContainFirstCharacter = true;
		}
	}

	long long int ans = 1;
	for(int i=0;i<roots.size();i++){
		if(i==0 && isContainFirstCharacter) ans *=9 ;
		else ans *= 10;
	}
	cout << ans << endl;
	return 0;
}