#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin>>n;
	vector<vector<string> >v;
	for(int i=0;i<n;i++)
	{
		string s1,s2; cin>>s1>>s2;
		bool found=0;
		for(int i=0;i<v.size();i++)
		{
			if(v[i].size()!=0)
			{
				int idx=v[i].size()-1;
				if( v [i][idx]==s1)
				{
				v[i].push_back(s2);
				found=1;
				}
			}
		}
		vector<string>vec;
		vec.push_back(s1);
		vec.push_back(s2);
		if(!found)
		v.push_back(vec);
	}
	cout<<v.size()<<endl;
	for(int i=0;i<v.size();i++)
		cout<<v[i][0]<<" "<<v[i][v[i].size()-1]<<endl;
	return 0;
}
