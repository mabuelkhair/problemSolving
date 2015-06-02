#include<bits/stdc++.h>
using namespace std;
vector<bool>vis;
vector<vector<int> >adj;
void dfs(int node)
{
	vis[node]=1;
	for(int i=0;i<adj[node].size();i++)
	{
		if(!vis[adj[node][i]])
			dfs(adj[node][i]);
	}

}
int main()
{
	int n; cin>>n;
	int m; cin>>m;
	vis.resize(n);
	adj.resize(n);
	for(int i=0;i<m;i++)
	{
		int a,b; cin>>a>>b;
		a--;b--;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	dfs(0);
	return 0;
}
