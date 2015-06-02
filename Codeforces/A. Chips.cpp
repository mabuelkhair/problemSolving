#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m; cin>>n>>m;
	bool b=1;
	while(b)
	{
		for(int i=1;i<=n;i++)
		{
			if(i>m)
			{
				b=0;
				break;
			}
			m-=i;
		}
	}
	cout<<m<<endl;
	return 0;
}
