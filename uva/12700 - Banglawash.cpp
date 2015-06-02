#include<bits/stdc++.h>
using namespace std;
int main() {
	int T;
	cin >> T;
	int arr[4];
	int caseNum = 0;
	while (T--) {
		caseNum++;
		//B W T A
		arr[0] = arr[1] = arr[2] = arr[3] = 0;
		int n;
		cin >> n;
		string s;
		cin >> s;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == 'B')
				arr[0]++;
			else if (s[i] == 'W')
				arr[1]++;
			else if (s[i] == 'T')
				arr[2]++;
			else if (s[i] == 'A')
				arr[3]++;
		}
		int total = n - arr[3];
		if (n == arr[3])
			printf("Case %d: ABANDONED\n", caseNum);
		else if (arr[0] == total)
			printf("Case %d: BANGLAWASH\n", caseNum);
		else if (arr[1] == total)
			printf("Case %d: WHITEWASH\n", caseNum);
		else if (arr[0] == arr[1])
			printf("Case %d: DRAW\n", caseNum);
		else if (arr[0] > arr[1]) {
			printf("Case %d: BANGLADESH %d %d\n", caseNum,arr[0],arr[1]);
		} else
			printf("Case %d: WWW %d %d\n", caseNum,arr[0],arr[1]);
	}
	return 0;
}
