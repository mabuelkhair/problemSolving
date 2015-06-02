#include<bits/stdc++.h>
using namespace std;
vector<int> parent;
class UnionFind {
	vector<int> parent;
	vector<int> weights;
public:
	UnionFind(int n) {
		parent.resize(n);
		weights.resize(n);
		for (int i = 0; i < n; i++)
			parent[i] = i;
	}
	int root(int i) {
		while (i != parent[i]) {
			parent[i] = parent[parent[i]];
			i = parent[i];
		}
		return i;
	}
	bool find(int x, int y) {
		int xRoot = root(x), yRoot = root(y);
		return xRoot == yRoot;
	}
	void unionF(int x, int y) {
		int xRoot = root(x), yRoot = root(y);
		if (weights[xRoot] > weights[yRoot])
			parent[yRoot] = parent[xRoot];
		else if (weights[yRoot] > weights[xRoot])
			parent[yRoot] = parent[xRoot];
		else {
			parent[yRoot] = parent[xRoot];
			weights[yRoot]++;
		}

	}
};
int main() {
	cout << "enter number of nodes, number of edges\n";
	int n, m;
	cin >> n >> m;
	UnionFind unionFind(n);
	vector<pair<int, pair<int, int> > > edges(m);
	for (int i = 0; i < m; i++) {
		cout << "enter source ,destination and cost 0-based\n";
		cin >> edges[i].second.first >> edges[i].second.second
				>> edges[i].first;
	}
	sort(edges.begin(), edges.end());
	cout << "used edges\n";
	for (int i = 0; i < m; i++) {
		int src = edges[i].second.first, dst = edges[i].second.second, cost =
				edges[i].first;
		if (unionFind.find(src, dst))
			continue;
		cout << "from " << src << " to " << dst << " cost " << cost << endl;
		unionFind.unionF(src, dst);
	}
}
