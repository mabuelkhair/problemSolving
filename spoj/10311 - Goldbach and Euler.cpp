#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
bool primes[100000009];
vector<int>v;
void seive()
{
	memset(primes,1,sizeof(primes));
	primes[0]=primes[1]=0;
	for(int i=2;i<100000007;i++)
	{
		if(primes[i]){
			v.push_back(i);
			if(LL(i)*i<100000007)
			for(int j=i*i;j<100000007;j+=i)
				primes[j]=0;
		}
	}
}
int main()
{

	seive();
	int n;
	while(cin>>n)
	{
		if(n&1)
		{
			if(primes[n-2])
				printf("%d is the sum of 2 and %d.\n",n,n-2);
			else
				printf("%d is not the sum of two primes!\n",n);
		}
		else
		{
			int pos=lower_bound(v.begin(),v.end(),n/2)-v.begin();
			if(v[pos]>n/2)
				pos--;
			bool b=0;
//			int a1,a2;
//			int diff=1e9;
					for(int i=pos;i>=0;i--)
					{
						if(primes[v[i]]&&primes[n-v[i]]&&v[i]!=n-v[i])
						{
							printf("%d is the sum of %d and %d.\n",n,v[i],n-v[i]);
							b=1;
									break;
						}

					}
					if(!b)
						printf("%d is not the sum of two primes!\n",n);


		}
	}
	return 0;
}
