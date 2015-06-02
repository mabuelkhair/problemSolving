#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int>v(n);
	for(int z=0;z<n;z++)
	{
		cin>>v[z];
	}
	int mx=-1e9;
	int mn=1e9;
	for(int i=1;i<n-1;i++)
	{
		vector<int>v2=v;
		v2.erase(v2.begin()+i);
		mx=-1e9;
		for(int j=0;j<v2.size()-1;j++)
		{
			mx=max(mx,v2[j+1]-v2[j]);
		}
		mn=min(mx,mn);

	}
	cout<<mn<<endl;
	return 0;
}
