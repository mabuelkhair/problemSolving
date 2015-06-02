#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m; cin>>n>>m;
	if(n-m>=2||n*2+2<m )
		return cout<<-1<<endl,0;
	int rem=m-n;
//	cout<<rem<<endl;
	if(n-m==0)
		{
			for(int i=0;i<n;i++)
			{
				cout<<10;
			}


		}
	else if(n-m==1)
	{
		for(int i=0;i<n-1;i++)
			cout<<"01";
		cout<<0;
	}
		else
		{
			while(n)
			{


//				cout<<rem<<endl;
				if(rem&&n&&m>1)
					cout<<110,rem--,m-=2,n--;

				else
					if(n&&m)
						cout<<10,m--,n--;
			}
			cout<<string(m,'1');
		}

	return 0;
}
