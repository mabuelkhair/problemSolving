#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[4];
	cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
	sort(arr,arr+4);
	if(arr[2]+arr[1]>arr[3]||arr[0]+arr[1]>arr[2])
		return cout<<"TRIANGLE\n",0;
	else
	{
		for(int i=0;i<4;i++)
			for(int j=0;j<4;j++)
				if(j!=i)
				for(int z=0;z<4;z++)
					if(arr[i]+arr[j]==arr[z])
						return cout<<"SEGMENT\n",0;
	}

		cout<<"IMPOSSIBLE\n";
	return 0;
}
