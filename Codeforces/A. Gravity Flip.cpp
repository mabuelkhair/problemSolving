#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[100];
	int n; cin>>n;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	sort(arr,arr+n);
	for(int i=0;i<n;i++)
	{
		if(i)
			cout<<" ";
		cout<<arr[i];
	}
	cout<<endl;
	return 0;
}
