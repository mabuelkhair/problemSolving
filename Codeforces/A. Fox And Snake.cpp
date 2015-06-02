#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,c=0; cin>>n>>m;
	string s1=string(m,'#'),s2=string(m-1,'.');
	for(int i=0;i<n;i++)
	{
		if(i%2==0)
			cout<<s1<<endl;
		else
		{
			if(c%2!=0)
			{
				cout<<"#"<<s2<<endl;
			}
			else
				cout<<s2<<"#"<<endl;
			c++;
		}
	}

	return 0;
}
