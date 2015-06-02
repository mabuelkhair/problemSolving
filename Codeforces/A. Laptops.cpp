#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n; cin>>n;
	vector<pair <int,int> >v(n);
	vector<int>v2(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i].first>>v[i].second;

		v2[i]=v[i].second;

	}
	sort(v.begin(),v.end());
	sort(v2.begin(),v2.end());
	for(int i=0;i<n;i++)
	{
//		cout<<v[i].first<<" "<<v[i].second<<v2[i]<<endl;
		if(v[i].second!=v2[i])
			return cout<<"Happy Alex\n",0;

	}
	cout<<"Poor Alex\n";
	return 0;
}
