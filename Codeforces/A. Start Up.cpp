#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s; cin>>s;
	string temp=string(s.rbegin(),s.rend());
	if(temp!=s)
	{
		cout<<"NO\n";
	}
	else
	{
		for(int i=0;i<s.size();i++)
		{
			if(s[i]!='A'&&s[i]!='H'&&s[i]!='I'&&s[i]!='M'&&s[i]!='O'&&s[i]!='T'&&s[i]!='U'&&s[i]!='V'&&s[i]!='W'&&s[i]!='X'&&s[i]!='Y')
			{
				return cout<<"NO\n",0;
			}
		}
		cout<<"YES\n";
	}
	return 0;
}
