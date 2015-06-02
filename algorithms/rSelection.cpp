#include<bits/stdc++.h>
using namespace std;

int rSelection(vector<int>&v, int target) {
	int pivot = v[0];
	vector<int> left, right;
	bool check=0;
	for (int i = 1; i < v.size(); i++) {
		if (v[i] < pivot)
			left.push_back(v[i]);
		else
			if(v[i]!=pivot||check)
			right.push_back(v[i]);
		if(v[i]==pivot)
			check=1;
	}
	if (target== left.size())
		return pivot;
	if (target<left.size())
		return rSelection(left, target);
	else
		return rSelection(right, target-left.size()-1);
}
int main() {
	int n, target;
	cin >> n >> target;
	target--;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cout << rSelection(arr, target);
	return 0;
}
