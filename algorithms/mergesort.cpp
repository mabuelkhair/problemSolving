#include<bits/stdc++.h>
using namespace std;
vector<int> partation(vector<int>&left, vector<int>&right) {
	vector<int> result;
	int i = 0, j = 0;
	while (i < left.size() && j < right.size()) {
		if (left[i] <= right[j])
			result.push_back(left[i++]);
		else
			result.push_back(right[j++]);
	}
	while (i < left.size())
		result.push_back(left[i++]);
	while (j < right.size())
		result.push_back(right[j++]);
	return result;

}
vector<int> mergeSort(vector<int>&v) {
	if(v.size()<=1)
		return v;
	vector<int>::iterator it = v.begin() + v.size() / 2;
	vector<int> left(v.begin(), it);
	vector<int> right(it, v.end());
	left = mergeSort(left);
	right = mergeSort(right);
	return partation(left, right);
}
int main() {
	int n; cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	v=mergeSort(v);
	for(int i=0;i<n;i++)
		cout<<v[i]<<endl;
	return 0;
}
