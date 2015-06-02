#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k; cin>>n>>k;
	int mx=-1e9;
	while(n--)
	{
		int f,t;
		cin>>f>>t;

		if(t>k)
		mx=max(f-(t-k),mx);
		else
			mx=max(mx,f);
	}
	cout<<mx<<endl;
	return 0;
}
