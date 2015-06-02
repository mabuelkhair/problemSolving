#include<bits/stdc++.h>
using namespace std;
bool arr[2009];
void seive()
{
	memset(arr,1,sizeof(arr));
	arr[0]=arr[1]=0;
	for(int i=2;i*i<2009;i++)
	{
		if(arr[i])
			for(int j=i*i;j<2009;j+=i)
				arr[j]=0;
	}
}
int main()
{
	seive();
	int t,cn=0; cin>>t;
	int freq[300];

	while(t--)
	{
		cn++;
		memset(freq,0,sizeof(freq));
		string s; cin>>s;
		for(int i=0;i<s.size();i++)
		{
			freq[s[i]]++;
		}
		string res="";
		for(int i=0;i<300;i++)
		{
			if(arr[freq[i]])
				res+=char(i);
		}
		printf("Case %d: ",cn);
		sort(res.begin(),res.end());
		if(res.size())
			cout<<res<<endl;
		else
			printf("empty\n");
	}
	return 0;
}
