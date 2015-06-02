#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("B.in","r",stdin);
	freopen("B.out","w",stdout);
#endif
int n,k; cin>>n>>k;
string s; cin>>s;
int arr[26];
memset(arr,0,sizeof(arr));
for(int i=0;i<s.size();i++)
	arr[s[i]-'A']++;
long long ret=0;
while(k)
{
	int mx=-1,idx=-1;
for(int i=0;i<26;i++)
{
	if(arr[i]>mx)mx=arr[i],idx=i;
}
if(arr[idx]>=k)
ret+=((long long)k*(long long)k),k=0;
else
	ret+=((long long)arr[idx]*(long long)arr[idx]),k-=arr[idx],arr[idx]=0;

}
cout<<ret<<endl;
	return 0;
}
