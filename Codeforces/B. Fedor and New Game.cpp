#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,k; scanf("%d%d%d",&n,&m,&k);
	int arr[1001];
	for(int i=0;i<=m;i++) scanf("%d",&arr[i]);

	int ret=0;
	for(int i=0;i<m;i++)
	{
		int xo=arr[i]^arr[m];
		int c=__builtin_popcount(xo);

			if(c<=k)
				ret++;
	}
	cout<<ret<<endl;
	return 0;
}
