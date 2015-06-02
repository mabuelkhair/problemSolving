#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s; cin>>s;
	int l=0,u=0;
	for(int i=0;i<s.length();i++)
		if(s[i]<97)
			u++;
		else
			l++;
	bool b=1;
	if(u>l)
		b=0;
	for(int i=0;i<s.length();i++)
	{
		if(b&&s[i]<97)
			s[i]+=32;
		else if(!b&&s[i]>=97)
			s[i]-=32;
	}
	cout<<s<<endl;

	return 0;
}
