#include<bits/stdc++.h>
using namespace std;
vector<bool> vis;
vector<vector<pair<int, int> > > adj;
vector<int> weight;
void dijkstra(int st) {
	weight[st] = 0;
	int node = st;
	while (node != -1) {
		vis[node]=1;
		for(int i=0;i<adj[node].size();i++)
		{
			if(weight[node]+adj[node][i].second<weight[adj[node][i].first])
				weight[adj[node][i].first]=weight[node]+adj[node][i].second;
		}
		node=-1; int mn=1e9;
		for(int i=0;i<vis.size();i++)
		{
			if(vis[i])
				continue;
			if(weight[i]<mn)
				mn=weight[i],node=i;
		}
	}
}
int main() {
	return 0;
}
