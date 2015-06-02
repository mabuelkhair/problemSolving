#include<bits/stdc++.h>
using namespace std;
int main()
{
	bool arr[3009];
	int n; cin>>n;
	int lst=1;
	memset(arr,0,sizeof(arr));
	for(int i=0;i<n;i++)
	{
		int x; cin>>x;
		arr[x]=1;
		if(x==lst)
		{
			while(arr[lst])
				lst++;
		}

	}
	cout<<lst<<endl;

	return 0;
}
