#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
bool vis[100009];
int cnt[100009];
long long memo[100009];
int mx=-1e9;
long long np(int idx)
{
	if(memo[idx]!=-1)
		return memo[idx];
	if(idx>mx)
		return 0;
	if(vis[idx]||cnt[idx]==0)
		return np(idx+1);

	vis[idx-1]=1;
	vis[idx+1]=1;
	long long mx=-1e9,mx2=-1e9;
	mx=max(mx,(idx*1LL*cnt[idx])+np(idx+2));
	vis[idx-1]=0;
	vis[idx+1]=0;
	mx2=max(mx2,np(idx+1));
	return memo[idx]=max(mx,mx2);
}
int main()
{
	memset(memo,-1,sizeof(memo));
	int n; cin>>n;
	for(int i=0;i<n;i++)
	{
		int a; cin>>a;
		 mx=max(mx,a);
		cnt[a]++;
	}
	cout<<np(1);
	return 0;
}
