#include<bits/stdc++.h>
using namespace std;
int main()
{
	int  n,d,x;
	cin>>n>>d;
	int c=0;
	int lst;
	cin>>lst;
	for(int i=1;i<n;i++)
	{
		int x;
		cin>>x;
//		cout<<x<<" "<<lst<<endl;
		if(x==lst)
		{
			x+=d;
			c++;
			lst=x;
		}
		else
		if(x<lst)
		{
			int  diff=lst-x;
			int n=ceil(1.0*diff/d);
//			cout<<n<<endl;
			if(diff%d==0)
			n++;
			x+=(n*d);
			c+=n;
			lst=x;
		}
		lst=x;
	}
	cout<<c<<endl;

	return 0;
}
