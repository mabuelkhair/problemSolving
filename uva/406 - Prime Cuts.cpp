#include<bits/stdc++.h>
using namespace std;
bool vis[10001];
vector<int>primes;
void seive(int n)
{
	vis[0]=1;
	for(int i=2;i*i<=n;i++)
	{
		if(!vis[i])
		{
			for(int j=i+i;j<=n;j+=i)
				vis[j]=1;
		}
	}
	for(int i=1;i<=n;i++)
		if(!vis[i])
		primes.push_back(i);
}
int main()
{
	int n,c,tmp;

	while(cin>>n>>c)
	{

		memset(vis,0,sizeof(vis));
		primes.clear();
		seive(n);
		int counter=primes.size();
		tmp=c;
		c*=2;
		if(counter%2!=0)
			c--;
		printf("%d %d:",n,tmp);
		if(counter < c)
		{
			for(int i=0;i<counter;i++)
				printf(" %d",primes[i]);
		}
		else
		{
			int idx=(counter-c)/2;
			for(int i=idx;i<counter;i++,c--)
			{
				if(!c)
					break;
				printf(" %d",primes[i]);
			}
		}
		puts("\n");

	}
	return 0;
}
