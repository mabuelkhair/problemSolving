#include<bits/stdc++.h>
using namespace std;
int main()
{

	int c=0;
	string str;
	set<string>s;
	while(getline(cin,str))
	{
		if(str[0]=='+')
			s.insert(str.substr(1));
		else
			if(str[0]=='-')
				s.erase(str.substr(1));
			else
			{
				for(int i=0;i<str.size();i++)
				{
					if(str[i]==':')
					{
						c+=(str.length()-i-1)*s.size();
						break;
					}
				}
			}
	}
	cout<<c<<endl;
	return 0;
}
