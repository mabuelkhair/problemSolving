#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,s,sum=0,mx=-1e9,vol;
	cin>>n>>s;
	for(int i=0;i<n;i++)
	{
		cin>>vol;
		mx=max(mx,vol);
		sum+=vol;
	}
	sum-=mx;
	if(sum>s)
		puts("NO");
	else
		puts("YES");
	return 0;
}
