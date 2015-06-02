#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	int maxProfit(vector<int> &prices) {
		int profit = 0;
		for (int i = 0; i < (int) prices.size() - 1; i++) {
			int mn;
			while(i<(int)prices.size()-1&&prices[i+1]<=prices[i])
				i++;
			mn=prices[i];
			while(i<(int)prices.size()-1&&prices[i+1]>prices[i])
				i++;
			profit+=prices[i]-mn;
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
