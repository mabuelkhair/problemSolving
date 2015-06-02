#include<bits/stdc++.h>
using namespace std;
int n, current_label;
vector<vector<int> > adj;
vector<bool> vis;
vector<int>order;
void dfs(int node) {
	vis[node]=1;
	for(int i=0;i<adj[node].size();i++)
	{
		if(!vis[adj[node][i]])
			dfs(adj[node][i]);
	}
	order[node]=current_label--;

}
void DFSLoop() {
	current_label = n;
	for (int i = 0; i < vis.size(); i++) {
		if (!vis[i])
			dfs(i);
	}
}
int main() {
	return 0;
}
