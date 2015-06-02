#include<bits/stdc++.h>
using namespace std;
bool arr[1000009];
int digitPrime[1000009];
void seive()
{
	memset(digitPrime,0,sizeof(digitPrime));
	memset(arr,1,sizeof(arr));
	arr[0]=arr[1]=0;
	for(int i=2;i*i<1000009;i++)
	{
		if(arr[i])
			for(int j=i*i;j<1000009;j+=i)
				arr[j]=0;
	}

	int counter=0;
	for(int i=0;i<1000009;i++)
	{
		int digitsSum=0;
		int tmp=i;
		if(arr[i])
		{
			while(tmp!=0)
			{
				digitsSum+=tmp%10;
				tmp/=10;
			}
			if(arr[digitsSum])
				counter++;
		}
		digitPrime[i]=counter;
	}
}
int main()
{
	seive();
	int n; scanf("%d",&n);
	while(n--)
	{
		int st,ed;
		scanf("%d%d",&st,&ed);
//		cout<<digitPrime[st]<<" "<<digitPrime[ed]<<endl;
		int cnt=digitPrime[ed]-digitPrime[st-1];
		printf("%d\n",cnt);
	}
	return 0;
}
