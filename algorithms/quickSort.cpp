#include<bits/stdc++.h>
using namespace std;
int arr[10000];
int partation(int st, int ed) {
	int pivot=arr[st];
	int i=st+1;
	for(int j=st+1;j<=ed;j++)
	{
		if(arr[j]<pivot)
			swap(arr[i++],arr[j]);
	}
	swap(arr[st],arr[i-1]);
	return i-1;
}
void quicksort(int st, int ed) {
	if (st < ed) {
		int pivot = partation(st, ed);
		quicksort(st, pivot);
		quicksort(pivot + 1, ed);
	}
}
int main() {
	int n;  cin>>n;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	quicksort(0,n-1);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<endl;
	return 0;
}
