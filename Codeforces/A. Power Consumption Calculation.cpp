#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, P1, P2, P3, T1, T2;
	cin >> n >> P1 >> P2 >> P3 >> T1 >> T2;
	int total=0;
	int st,ed; cin>>st>>ed;
	total+=(ed-st)*P1;
	for(int i=1;i<n;i++)
	{
		cin>>st;
		int diff=st-ed;
		if(diff<T1)
			total+=diff*P1;
		else
		{
				total+=(T1*P1);
				diff-=T1;

				if(diff>=T2)
				{
					total+=(T2*P2);
					diff-=T2;
					total+=diff*P3;
				}
				else
				{
					total+=(diff*P2);
				}
		}
		cin>>ed;
		total+=(ed-st)*P1;
	}
	cout<<total<<endl;
	return 0;
}
