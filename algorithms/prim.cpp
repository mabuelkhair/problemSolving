#include<bits/stdc++.h>
using namespace std;
struct node {
	int src, dst, cost;
	bool operator <(const node & e) const {
		return cost > e.cost;
	}
};
int n;
vector<vector<node> > graph;
vector<vector<node> > prim() {
	int finished = 0;
	vector<vector<node> > spaningTree(n);
	priority_queue<node> pq;
	vector<bool> done(n);
	done[0] = 1;
	finished++;
	for (int i = 0; i < (int) graph[0].size(); i++) {
		pq.push(graph[0][i]);
	}
	cout << "new tree edges \n";
	while (finished != n) {
		node obj = pq.top();
		pq.pop();
		if (done[obj.dst])
			continue;
		cout << "from " << obj.src << " to " << obj.dst << " cost" << obj.cost
				<< endl;
		finished++;
		done[obj.dst] = 1;
		spaningTree[obj.src].push_back(obj);
		for (int i = 0; i < (int) graph[obj.dst].size(); i++)
			pq.push(graph[obj.dst][i]);
		swap(obj.src, obj.dst);
		spaningTree[obj.src].push_back(obj);

	}

	return spaningTree;
}
int main() {
	cout << "enter number of nodes\n";
	cin >> n;
	graph.resize(n);
	int m;
	cout << "enter number of edges\n";
	cin >> m;
	for (int i = 0; i < m; i++) {
		node obj;
		cout << "enter source , destination and cost 0-based\n";
		cin >> obj.src >> obj.dst >> obj.cost;
//		obj.src--, obj.dst--;
		graph[obj.src].push_back(obj);
		swap(obj.src, obj.dst);
		graph[obj.src].push_back(obj);
	}
	cout << "this is the minimum spanning tree Adjacency List\n";
	cout
			<< "so each edge is printed twice 1 from source to destination and vice versa\n";
	vector<vector<node> > minimumSpaningTree = prim();
	for (int i = 0; i < (int) minimumSpaningTree.size(); i++) {
		for (int j = 0; j < (int) minimumSpaningTree[i].size(); j++)
			cout << minimumSpaningTree[i][j].src << " "
					<< minimumSpaningTree[i][j].dst << " "
					<< minimumSpaningTree[i][j].cost << endl;
	}
	return 0;
}
