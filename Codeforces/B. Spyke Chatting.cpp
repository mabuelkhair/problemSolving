#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,k;
	scanf("%d%d%d",&n,&m,&k);
	vector<vector<int> >v(n);
	vector<int>sum(m);
	vector<int>minus(n);
	int a,b;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&a);
			if(a==1)
				v[i].push_back(j);
		}
	}
	for(int i=0;i<k;i++)
	{
		scanf("%d%d",&a,&b);
		sum[b-1]++;
		minus[a-1]--;
	}
	for(int i=0;i<n;i++)
	{
		int ret=minus[i];
		for(int j=0;j<v[i].size();j++)
		{
			ret+=sum[v[i][j]];
		}
		if(i)
			cout<<" ";
		cout<<ret;
	}
	cout<<endl;
	return 0;
}
