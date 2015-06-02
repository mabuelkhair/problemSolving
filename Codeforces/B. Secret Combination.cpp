#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin>>n;
	string s; cin>>s;
	vector<string>v;

	string tmp=s;

	for(int i=0;i<10;i++)
	{
		for(int j=0;j<n;j++)
		{
			tmp[j]++;
			if(tmp[j]>'9')
				tmp[j]='0';
		}
		v.push_back(tmp);
	}
	vector<string>res;
	for(int i=0;i<v.size();i++)
	{
		for(int idx=0;idx<n;idx++)
		{
			string str="";
			for(int j=0;j<n;j++)
			{
				str+=v[i][(idx+j)%n];
			}
//			cout<<str<<endl;
			res.push_back(str);
		}
	}
	sort(res.begin(),res.end());
	cout<<res[0]<<endl;

	return 0;
}
