#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long x,y,n;
	cin>>x>>y>>n;
	vector<long long>v;
	v.push_back(x);
	v.push_back(y);
	for(int i=2;i<6;i++)
	{
		long long x=v[i-1]-v[i-2];
		v.push_back(x);
	}
	cout<<( (v[(n-1)%6]%1000000007 +1000000007  )%1000000007  )<<endl;
	return 0;
}
