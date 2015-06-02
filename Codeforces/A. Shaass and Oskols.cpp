#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[101];
	int n; cin>>n;
	for(int i=1;i<=n;i++)
		cin>>arr[i];
		int m; cin>>m;
		for(int i=0;i<m;i++)
		{
			int idx,line;
			cin>>line>>idx;
			if(line!=1)
				arr[line-1]+=(idx-1);
			if(line!=n)
				arr[line+1]+=(arr[line]-idx);
			arr[line]=0;

		}
		for(int i=1;i<=n;i++)
			cout<<arr[i]<<endl;
	return 0;
}
