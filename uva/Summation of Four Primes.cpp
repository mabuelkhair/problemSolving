#include<bits/stdc++.h>
using namespace std;
const int MAX = 10000000;

bool prime[MAX];

void sieve ()
{
        int i ,j;
        memset(prime,1,sizeof(prime));
        prime [0] = prime [1] = 0;
        for ( i = 2 ; i*i < MAX ; i ++ )
        {
                if ( !prime[i] )
                        continue;
                for ( j = i*i ; j < MAX ; j+=i )
                        prime[j] = 0;
        }
}

int main()
{
	sieve();
	int n;
	int res[4];
	while(cin>>n)
	{

		if(n%2==0)
			res[0]=res[1]=2,n-=4;
		else
			res[0]=2,res[1]=3,n-=5;

		if(n<=2)
		{
			cout<<"Impossible."<<endl;
			continue;
		}
		else
		{
			for(int i=2;i<=n+5;i++)
			{
				if(prime[i]&&prime[n-i])
				{
					cout<<res[0]<<" "<<res[1]<<" "<<i<<" "<<n-i<<endl;
					break;
				}
			}
		}
	}
	return 0;
}
