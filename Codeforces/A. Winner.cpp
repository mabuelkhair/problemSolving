#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<string,int >m;
	int mx=-1e9;
	string winner="";
	int t; cin>>t;
	vector<string>input;
	vector<int>input2;
	for(int i=0;i<t;i++)
	{
		string s; cin>>s;
		int n; cin>>n;
		input.push_back(s);
		input2.push_back(n);
		if(m.count(s)!=0)
			m[s]+=n;
		else
			m[s]=n;

	}
	set<string>s;
	map<string,int >::iterator it;
	for(it=m.begin();it!=m.end();it++)
		mx=max(it->second,mx);

	for(it=m.begin();it!=m.end();it++)
			if(it->second==mx)
				s.insert(it->first);

	m.clear();

	for(int i=0;i<t;i++)
	{

		string str=input[i];
		int n=input2[i];
		if(m.count(str)!=0)
			m[str]+=n;
		else
			m[str]=n;

		if(s.count(str)&&m[str]>=mx)
		{
			winner=str;
			break;
		}
	}




	cout<<winner<<endl;
	return 0;
}
