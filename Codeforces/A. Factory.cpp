#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a,m; cin>>a>>m;
	for(int i=0;i<100;i++)
	{
		if(a%m==0)
			return cout<<"Yes\n",0;
		a+=(a%m);
	}
	cout<<"No"<<endl;
	return 0;
}
