#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[2001];
	memset(arr,0,sizeof(arr));
	int n;cin>>n;
	int c=0;
	map< int,vector<int> >m;
	for(int i=0;i<n;i++)
	{
		int a; cin>>a;
		arr[a]++;

		m[a].push_back(i+1);

		if(arr[a]>=2)
			c++;
	}
	if(c<2)
		return cout<<"NO\n",0;
	map<int,vector<int> >::iterator it;
	vector<vector<int> >v(3);
	int md=0;
	for(it=m.begin();it!=m.end();it++)
	{
		vector<int>getter=it->second;
		if(getter.size()==1)
		{
			v[0].push_back(getter[0]);
			v[1].push_back(getter[0]);
			v[2].push_back(getter[0]);

		}
		else if(getter.size()==2)
		{
			v[0].push_back(getter[0]);
			v[1].push_back(getter[1]);
			v[2].push_back(getter[md%2]);
			md++;
			v[0].push_back(getter[1]);
			v[1].push_back(getter[0]);
			v[2].push_back(getter[md%2]);

		}
		else if(getter.size()>2)
		{
			int n1=0,n2=1,n3=2;
			for(int j=0;j<int(getter.size());j++,n1++,n2++,n3++)
			{

				v[0].push_back(getter[n1%getter.size()]);
				v[1].push_back(getter[n2%getter.size()]);
				v[2].push_back(getter[n3%getter.size()]);
			}


		}

	}
	puts("YES");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<int(v[i].size());j++)
		{
			if(j)
				cout<<" ";
			cout<<v[i][j];
		}
		cout<<endl;
	}

	return 0;
}
