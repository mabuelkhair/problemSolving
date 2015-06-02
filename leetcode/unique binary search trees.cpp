#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int memo[1000];
	int solve(int n)
	{
		memo[1] = 1, memo[2] = 2, memo[3] = 5, memo[0] = 1;
		if (memo[n] != 0)
			return memo[n];
		for (int i = 1; i <= n; i++) {

			memo[n] += solve(i - 1) * solve(n - i);
		}
		return memo[n];
	}
	int numTrees(int n) {
		memset(memo,0,sizeof(memo));
		return solve(n);
	}
};
int main() {
	Solution s;
	memset(s.memo,0,sizeof(s.memo));
		cout << s.numTrees(100);
	return 0;
}
