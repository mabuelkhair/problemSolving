#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	vector<string>v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	int counter=0;
	vector<bool>sorted(n,0);
	vector<bool>sorted2;
	for(int i=0;i<m;i++)
	{
		char lst=v[0][i];
		bool b=0;
		sorted2.clear();
		sorted2.resize(n,0);
		for(int j=1;j<n;j++)
		{
			if(v[j][i]>lst)
				sorted2[j]=1;
			if(v[j][i]<lst&&!sorted[j])
			{
				b=1;
				break;
			}
			lst=v[j][i];
		}
		if(b)
			counter++;
		if(!b)
		{
			for(int i=0;i<n;i++)
				if(sorted2[i])
					sorted[i]=1;
		}
	}
	cout<<counter<<endl;
	return 0;
}
