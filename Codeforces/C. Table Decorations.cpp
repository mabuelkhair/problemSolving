#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a[3],sum=0;
	cin>>a[0]>>a[1]>>a[2];
	sort(a,a+3);
	sum=a[0]+a[1]+a[2];
	sum/=3;
	long long res=min(sum,a[0]+a[1]);
	cout<<res<<endl;
	return 0;
}
