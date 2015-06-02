#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s; cin>>s;
	for(int i=0;i<int(s.length());i++)
	{

		if(s[i]=='a'||s[i]=='A'||s[i]=='o'||s[i]=='O'||s[i]=='y'||s[i]=='Y'||s[i]=='e'||s[i]=='E'||s[i]=='u'||s[i]=='U'||s[i]=='i'||s[i]=='I')
		{
			s.erase(i,1);
			i--;
			continue;
		}
		else if(s[i]<97)
			s[i]+=32;
		s.insert(i,1,'.');
		i++;

	}
	cout<<s<<endl;
	return 0;
}
