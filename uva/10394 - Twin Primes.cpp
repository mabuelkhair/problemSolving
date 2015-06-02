#include<bits/stdc++.h>
using namespace std;
bool arr[20000009];
map<int,int>m;
void seive()
{
	memset(arr,1,sizeof(arr));
	arr[0]=arr[1]=0;
	for(int i=2;i*i<20000009;i++)
	{
		if(arr[i])
			for(int j=i*i;j<20000009;j+=i)
				arr[j]=0;
	}
	int idx=1;
	for(int i=2;i<20000009;i++)
	{
		if(arr[i]&&arr[i+2])
			m[idx]=i,idx++;
	}
}
int main()
{
	seive();
	int n;
	while(cin>>n)
	{
		printf("(%d, %d)\n",m[n],m[n]+2);
	}
	return 0;
}
