#include<bits/stdc++.h>
using namespace std;
vector<long long>v;
void primeFact(long long n)
{
	v.clear();
	for(long long i=2;i*i<=n;i++)
		while(n%i==0)
			v.push_back(i),n/=i;
	if(n>1)
		v.push_back(n);
}
int main()
{
	long long n;
	while(cin>>n&&n>-1)
	{
		primeFact(n);
		sort(v.begin(),v.end());
		for(int i=0;i<v.size();i++)
		{
			cout<<"    "<<v[i]<<endl;
		}
		cout<<endl;
	}
	return 0;
}
