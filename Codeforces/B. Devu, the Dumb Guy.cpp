#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
	int arr[100000];
	int n,x; cin>>n>>x;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	sort(arr,arr+n);
	long long res;
	for(int i=0;i<n;i++)
	{
		res+=((LL)arr[i]*x);
		x--;
		x=max(1,x);
	}
	cout<<res<<endl;
	return 0;
}
