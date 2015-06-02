#include<bits/stdc++.h>
using namespace std;
bool isLucky(int n)
{
	while(n!=0)
	{
		if(n%10!=4&&n%10!=7)
			return 0;
		n/=10;
	}
	return 1;
}
int main()
{
	int n; cin>>n;
	for(int i=4;i<=n;i++)
	{
		if(n%i==0&&isLucky(i))
			return cout<<"YES\n",0;
	}
	cout<<"NO\n";
	return 0;
}
