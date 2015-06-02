#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin>>n;
	vector<pair<int,int> >v(n);
	for(int i=0;i<n;i++)
	{
		int a,b; cin>>a>>b;
		v[i].first=a,v[i].second=b;
	}
	sort(v.begin(),v.end());
	int mn=-1e9;
	for(int i=0;i<n;i++)
	{
		if(v[i].second>=mn)
			mn=v[i].second;
		else
			mn=v[i].first;
	}
	cout<<mn<<endl;
	return 0;
}
