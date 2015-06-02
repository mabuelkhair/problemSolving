#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int sum=0,idx=0,counter=0,mn=1e9,res;
	vector<int>v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		sum+=v[i];
		counter++;
		if(counter==k)
		{
			idx++;
			counter--;
			if(sum<mn)
				res=idx,mn=sum;
			sum-=v[i-k+1];
		}
	}
	cout<<res<<endl;
	return 0;
}
