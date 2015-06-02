#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,num; cin>>n;
	int zeros=0,idx0;
	int ones=0,idx1;
	for(int i=0;i<n;i++)
	{
		cin>>num;
		if(num%2==0)
			zeros++,idx0=i;
		else
			ones++,idx1=i;
	}
	if(ones>zeros)
		cout<<idx0+1<<endl;
	else
		cout<<idx1+1<<endl;

	return 0;
}
