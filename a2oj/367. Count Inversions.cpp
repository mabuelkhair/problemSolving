#include<bits/stdc++.h>
using namespace std;
long long inversions;
vector<int> merge(vector<int>& v, vector<int>& left, vector<int>& right) {
	int sz = left.size() + right.size();
	int idx = 0;
	vector<int> result(sz);
	int i = 0, j = 0;
	while (i < left.size() && j < right.size()) {
		if (left[i] <= right[j]) {
			result[idx] = left[i];
			idx++;
			i++;
		} else {
			result[idx] = right[j];
			inversions+=(left.size()-i);
			idx++;
			j++;

		}
	}
	while (i < left.size()) {
		result[idx] = left[i];
		idx++;
		i++;
	}
	while (j < right.size()) {
		result[idx] = right[j];
		idx++;
		j++;
	}
	return result;
}
vector<int> merge_sort(vector<int>&v) {
	if (v.size() <= 1)
		return v;
	vector<int>::iterator it = v.begin() + v.size() / 2;
	vector<int> left(v.begin(), it);
	vector<int> right(it, v.end());
	left = merge_sort(left);
	right = merge_sort(right);
	return merge(v, left, right);

}

int main() {
	int T; cin>>T;
	while(T--)
	{
		inversions=0;
		int n; cin>>n;
		vector<int>v(n);
		for(int i=0;i<n;i++)
			cin>>v[i];
		merge_sort(v);
		cout<<inversions<<endl;
	}
	return 0;
}
