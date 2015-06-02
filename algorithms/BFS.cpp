#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > adj;
vector<bool>vis;
void bfs(int src) {

	queue<int>q;
	q.push(src);
	while(!q.empty())
	{
		int node=q.front();
		cout<<node<<endl;
		q.pop();
		vis[node]=1;
		for(int i=0;i<adj[node].size();i++)
		{
			if(!vis[adj[node][i]])
			{
				vis[adj[node][i]]=1;
				q.push(adj[node][i]);
			}
		}
	}
}
int main() {
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
	bfs(1);
	return 0;
}
