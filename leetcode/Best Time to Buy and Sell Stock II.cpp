#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	int maxProfit(vector<int> &prices) {
		int profit = 0;
		//lazm a3ml el casting dah 3shan el code yshta8l l2n lw 0 hydrb l2n unsigned 0 - signed 1 hydy rakm kbeer fsh5
		for (int i = 0; i < (int) prices.size() - 1; i++) {
			if (prices[i + 1] > prices[i])
				profit += prices[i + 1] - prices[i];
		}
		return profit;
	}

};
int main()
{
Solution s;
vector<int>v;
s.maxProfit(v);
	return 0;
}
