#include<bits/stdc++.h>
using namespace std;
typedef  long long LL;
int main ()
{

	// l min b7ot kolo 2ad ba3do w l reminder bwz3o 3lehom kolhom wa7d wa7d
	int n,m; cin>>n>>m;
	int min1=n/m;
	int rem=n%m;
	int min2=min1+1;
	long long  k1=(m-rem)*(long long)(((long long)(min1)*(min1-1))/2);
	k1+=(rem)*LL((LL(min2)*(min2-1))/2);
	// l max b7ot kolo fe wa7da w ba2y l teams fehom 1 player
	long long  k2=LL(LL(n-m+1)*(n-m))/2;
	cout<<k1<<" "<<k2<<endl;

	return 0;
}
