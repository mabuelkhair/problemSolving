#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[1000];
	int n; cin>>n;
	int lst;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]==1)
			lst=i;
	}
	int c=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==1)
			{
				c++;
				while(i+1<n&&arr[i+1])
					c++,i++;

				if(i+1<n&&i!=lst)
					c++;
			}
	}
	cout<<c<<endl;

	return 0;
}
