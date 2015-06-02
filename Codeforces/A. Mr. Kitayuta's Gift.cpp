#include<bits/stdc++.h>
using namespace std;
bool ispalindrom(string s)
{
	for(int i=0,j=s.length()-1;i<s.length()/2;i++,j--)
	{
		if(s[i]!=s[j])
			return false;
	}
	return true;
}
int main()
{

	string s; cin>>s;
	for(int i=0;i<=s.length();i++)
	{
		for(int j=0;j<26;j++)
		{

			string cpy=s;
			cpy.insert(i,1,'a'+j);
//			cout<<cpy<<endl;
			if(ispalindrom(cpy))
				return cout<<cpy<<endl,0;

		}
	}
	cout<<"NA"<<endl;
	return 0;
}
