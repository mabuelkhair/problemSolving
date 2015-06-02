#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	vector<pair<int,int> >v(n);
	vector<int>res;
	for(int i=0;i<n;i++)
	{
		cin>>v[i].first;
		v[i].second=i+1;
	}
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++)
	{
		if(v[i].first<=k)
		{
			res.push_back(v[i].second);
			k-=v[i].first;
		}
		else
			break;
	}
	cout<<res.size()<<endl;
	for(int i=0;i<res.size();i++)
	{
		if(i)
			cout<<" ";
		cout<<res[i];
	}

	return 0;
}
