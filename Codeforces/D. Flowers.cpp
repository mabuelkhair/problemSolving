#include<bits/stdc++.h>
using namespace std;
int MOD =1000000007;
int main()
{

	int  value[100009];
	int comulative[100009];
	int  t,k;
	cin>>t>>k;
	value[0]=comulative[0]=1;
	for(int i=1;i<100009;i++)
	{
		if(i<k)
			value[i]=1;
		if(i>=k)
			value[i]=(value[i-k]+value[i-1])%MOD;
		comulative[i]=(value[i]+comulative[i-1])%MOD;
	};
	for(int i=0;i<t;i++)
	{
		int a,b; cin>>a>>b;
//		cout<<comulative[b]<<" "<<comulative[a]<<endl;
		int sum=(MOD+ comulative[b]- comulative[a-1] )%MOD;
		cout<<sum<<endl;
	}

	return 0;
}
