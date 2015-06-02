// mostafa mohamed ibrahim
// 20120384
// CS_4
#include<bits/stdc++.h>
using namespace std;
vector<int> weights;
vector<int> values;
int memo[2009][10000];
int mx = -1e9;
vector<int> path;
int solve(int idx, int remainingWeight, vector<int> p, int total) {
	if (total > mx)
	{
		mx = total;
		path = p;
	}
	if (remainingWeight == 0 || idx == (int) weights.size()) {
		return 0;
	}
	if (memo[idx][remainingWeight] != -1) {
		return memo[idx][remainingWeight];
	}
	int value1 = 0, value2 = 0;
	value2 = solve(idx + 1, remainingWeight, p, total);
	if (remainingWeight >= weights[idx]) {
		p.push_back(idx);
		value1 = solve(idx + 1, remainingWeight - weights[idx], p,
				total + values[idx]) + values[idx];
	}

	return memo[idx][remainingWeight] = max(value1, value2);
}
int main() {
	memset(memo, -1, sizeof(memo));
	int bagSize;
	cout << "enter the bag size" << endl;
	cin >> bagSize;
	int numberOfItems;
	cout << "Enter number of items\n";
	cin >> numberOfItems;
	weights.resize(numberOfItems);
	values.resize(numberOfItems);
	for (int i = 0; i < numberOfItems; i++) {
		cout << "Enter the wight of item number" << i + 1 << endl;
		cin >> weights[i];
		cout << "Enter the value of item number" << i + 1 << endl;
		cin >> values[i];
	}
	vector<int> pts;
	cout <<"the optimal solution is "<< solve(0, bagSize, pts, 0) << endl;
	cout<<"the path\n";
	cout<<"item number -> item value\n";
	for (int i = 0; i < (int)path.size(); i++)
		cout << path[i] << " " << values[path[i]] << endl;
	cout << endl;
	return 0;
}
