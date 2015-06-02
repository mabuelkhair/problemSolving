#include<bits/stdc++.h>
using namespace std;
bool primes[1000009];
void seive()
{
	memset(primes,1,sizeof(primes));
	primes[0]=primes[1]=0;
	for(int i=2;i*i<1000009;i++)
	{
		if(primes[i])
			for(int j=i*i;j<1000009;j+=i)
				primes[j]=0;
	}
}
int main()
{
	seive();
	int n;
	while(cin>>n&&n)
	{
		int c=0;
		for(int i=2;i<=n/2;i++)
			if(primes[i]&&primes[n-i])
				c++;
		cout<<c<<endl;
	}
	return 0;
}
