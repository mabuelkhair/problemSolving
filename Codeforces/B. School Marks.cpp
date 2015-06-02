#include<bits/stdc++.h>
using namespace std;
int main() {
	int numberOfTests, alreadyFinishedTests, maximumMark, maximumTotalmark,
			minimumMedian;
	cin >> numberOfTests >> alreadyFinishedTests >> maximumMark
			>> maximumTotalmark >> minimumMedian;
	vector<int> marks(numberOfTests);
	int sum = 0;
	int medianIndex = numberOfTests / 2;
	int st = 0, ed = numberOfTests - 1;
	for (int i = 0; i < alreadyFinishedTests; i++) {
		int x;
		cin >> x;
		if (x < minimumMedian)
			marks[st++] = x;
		else
			marks[ed--] = x;
	}
	vector<int> res;
	for (int i = 0; i < numberOfTests; i++) {
		if (marks[i] == 0 && i < medianIndex) {
			marks[i] = 1;
			res.push_back(1);
		} else if (marks[i] == 0) {
			marks[i] = minimumMedian;
			res.push_back(minimumMedian);
		}
		sum += marks[i];
	}
	if (sum > maximumTotalmark || marks[medianIndex] < minimumMedian)
		return cout << "-1\n", 0;

	for (int i = 0; i < (int) res.size(); i++)
		cout << res[i] << " ";

	return 0;
}
