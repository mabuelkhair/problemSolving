#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
	int n; cin>>n;
	vector<long long>v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	vector<pair<int,int> >prizes(5);
	for(int i=0;i<5;i++)
	{
		cin>>prizes[i].first;
		prizes[i].second=i;
	}
	sort(prizes.rbegin(),prizes.rend());
	long long res[5];
	memset(res,0,sizeof(res));
	long long have=0;
	for(int i=0;i<n;i++)
	{
		have+=v[i];
		for(int j=0;j<5;j++)
		{
			int counter=have/prizes[j].first;
			res[prizes[j].second]+=(counter*1LL);
			have-=(prizes[j].first*counter);
		}
	}
	for(int i=0;i<5;i++)
		cout<<res[i]<<" ";
	cout<<endl<<have<<endl;
	return 0;
}
