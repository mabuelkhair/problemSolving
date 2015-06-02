#include<bits/stdc++.h>
using namespace std;
int power(int b,int p)
{
	int res=1;
	for(int i=0;i<p;i++)
		res*=b;
	return res;
}
int main()
{
	int a,b,n; cin>>a>>b>>n;
	if(b==0)
			return puts("0"),0;
	if((b!=0&&a==0)||abs(b)%abs(a)!=0)
		return puts("No solution"),0;

	int x=b/a;
	if(x<0)
	{
		int i=-1;
		while(true)
		{
			int p=power(i,n);
			if(p>x&&i!=-1)
				return puts("No solution"),0;
			if(p==x)
				return cout<<i<<endl,0;
			i--;
		}
	}
	else
	{
		int i=1;
				while(true)
				{
					int p=power(i,n);
					if(p>x)
						return puts("No solution"),0;
					if(p==x)
						return cout<<i<<endl,0;
					i++;
				}
	}
	return 0;
}
