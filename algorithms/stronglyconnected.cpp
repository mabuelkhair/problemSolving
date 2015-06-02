#include<bits/stdc++.h>
using namespace std;
vector<bool> vis;
vector<int> label;
//vector<vector<int> > adj;
int leader, current_time;
vector<int> leaders;
vector<int> finish;
vector<vector<int> > reverseGraph(vector<vector<int> >&graph) {
	vector<vector<int> > result(graph.size());
	for (int i = 0; i < graph.size(); i++) {
		for (int j = 0; j < graph[i].size(); j++) {
			result[graph[i][j]].push_back(i);
		}
	}
	return result;
}
void dfs(int src, vector<vector<int> >&graph) {
	vis[src] = 1;
	leaders[src] = leader;
	for (int i = 0; i < graph[src].size(); i++) {
		if (!vis[graph[src][i]])
			dfs(graph[src][i], graph);
	}
	finish[src] = current_time++;
}
void dfsLoop(vector<vector<int> >&graph) {
	current_time=0;
	for (int i = graph.size()-1; i >= 0; i--) {
		int current_node = label[i];
		if (!vis[current_node])
			leader = current_node, dfs(current_node, graph);
	}
}
vector<vector<int> > kosaraju(vector<vector<int> >&graph) {

	int sz = graph.size();
	label.resize(sz);
	vis.resize(sz);
	leaders.resize(sz);
	finish.resize(sz);
	for (int i = 0; i < label.size(); i++)
		label[i] = i;
	vector<vector<int> > reversed = reverseGraph(graph);
	dfsLoop(reversed);
	vis.clear();
	vis.resize(sz, 0);
	for (int i = 0; i < label.size(); i++)
		label[finish[i]] = i;

	dfsLoop(graph);
	vector<vector<int> > result(sz);
	for (int i = 0; i < sz; i++) {
		result[leaders[i]].push_back(i);
	}
	return result;
}
int main() {
	int n;
		cin >> n;
		vector<vector<int> > graph(n);
			int k;
				cin >> k;
			for (int i = 0; i < k; i++) {
				int a, b;
				cin >> a >> b;
				a--;
				b--;
				graph[a].push_back(b);
			}
			vector<vector<int> >res=kosaraju(graph);
			for (int i = 0; i < n; i++) {
				if (res[i].size() != 0) {
					cout << "connected component\n";
					for (int j = 0; j < res[i].size(); j++)
						cout << res[i][j]+1 << endl;

				}
			}
	return 0;
}
