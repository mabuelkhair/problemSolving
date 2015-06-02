#include<bits/stdc++.h>
using namespace std;
bool vis[100009];
int m[100009];
int main() {
	int n, s, t;
	cin >> n >> s >> t;
	if (s==t)
		return cout<<0<<endl,0;
	for(int i=1;i<=n;i++)
	{
		int x; cin>>x;
		m[i]=x;
	}
	int steps=0;
	int init=s;
	vis[init]=1;
	while(true)
	{
		init=m[init];
		if(vis[init])
		{
			cout<<-1<<endl;
			break;
		}
		steps++;
		if(init==t)
		{
			cout<<steps<<endl;
			break;
		}
		vis[init]=1;
	}
	return 0;
}
