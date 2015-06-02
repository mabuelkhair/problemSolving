#include<bits/stdc++.h>
using namespace std;
struct edge{
int to;
int color;
};

int n,m;
vector<vector<edge> >v;
vector<bool>vis;
int c=0;
int color;
bool test;
void bfs(int src,int dest)
{
	if(src==dest)
	{
	test=1;
	}
	for(int i=0;i<v[src].size();i++)
	{

		if(!vis[v[src][i].to]&&color==v[src][i].color)
		{
			vis[v[src][i].to]=1;
			bfs(v[src][i].to,dest);
			vis[v[src][i].to]=0;
		}
	}
}
int main()
{
	cin>>n>>m;
	v.resize(n);
	for(int i=0;i<m;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		edge obj;
		a--; b--;
		obj.to=b;
		obj.color=c;
		v[a].push_back(obj);
		obj.to=a;
		v[b].push_back(obj);

	}
	int q; cin>>q;
	for(int i=0;i<q;i++)
	{
		int u,v; cin>>u>>v;
		u--;v--;
		c=0;
		for(int j=1;j<=m;j++)
		{
			vis.clear();
			vis.resize(n,0);
			vis[u]=1;
			color=j;
			test=0;
			bfs(u,v);
			if(test)
			c++;
		}
		vis[u]=0;
		cout<<c<<endl;
	}
	return 0;
}
