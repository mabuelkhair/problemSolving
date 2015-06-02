#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long LL;

int main()
{
	int n;
	cin>>n;
	int count=0;
	vector<long long>v(n);
	vector<long long>com(n);

	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		com[i]=v[i];
		if(i)
			com[i]+=com[i-1];
	}

	long long sum=com[n-1];
	if(sum%3!=0)
		cout<<0<<endl;
	else
	{
		long long st=sum/3;
		long long md=st+st;

		vector<long long>mdCom(n);
		for(int i=n-2;i>=0;i--)
		{
			mdCom[i]=mdCom[i+1];
			if(com[i]==md)
				mdCom[i]++;
//			cout<<i<<" "<<mdCom[i]<<endl;
		}
		long long sum2=0;
		for(int i=0;i<n-2;i++)
		{
			if(com[i]==st)
			{
				sum2+=mdCom[i];
				if(com[i]==md)
					sum2--;
			}


		}
		cout<<sum2<<endl;
	}
	return 0;
}
