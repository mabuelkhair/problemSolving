#include<bits/stdc++.h>
using namespace std;
bool primes[1009];
set<int>s;
void sieve()
{
	memset(primes,1,sizeof(primes));
	primes[0]=primes[1]=0;
	for(int i=2;i*i<=1001;i++)
	{
		if(primes[i])
		for(int j=i*i;j<1001;j+=i)
		{
			primes[j]=0;
		}
	}
	int lst=0;
	for(int i=0;i<1009;i++)
		if(primes[i])
			s.insert(i+lst+1),lst=i;

}
int main()
{
	sieve();

	int n,k; cin>>n>>k;
	int c=0;
	for(int i=2;i<=n;i++)
	{
		if(primes[i]&&s.count(i))
			c++;
	}
	if(c>=k)
		puts("YES");
	else
		puts("NO");
	return 0;
}
