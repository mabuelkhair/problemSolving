#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin>>n;
	string s; cin>>s;
	string s2=s;
	int res=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='0')
		{
			res++;
			s2[i]=1;
			break;
		}
		else
		{
			res++;
			s2[i]=0;
		}
	}
	cout<<res<<endl;
	return 0;
}
