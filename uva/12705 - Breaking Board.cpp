#include<bits/stdc++.h>
using namespace std;
int main() {
	vector<int> v;
	for (int i = 1; i <= 6; i++) {
		for (int j = 1; j <= 6; j++) {
//			cout<<i+j<<endl;
			v.push_back(i + j);
		}
	}
	sort(v.begin(), v.end());
	int T;
	cin >> T;

	cin.ignore();
	while (T--) {
		string s;

		getline(cin, s);

//		cout<<s<<endl;
		int chars[30];
		int nums[30];
		memset(chars, 0, sizeof(chars));
		memset(nums, 0, sizeof(nums));
		vector<int> res;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == ' ')
				continue;
			if (s[i] >= '0' && s[i] <= '9')
				nums[s[i] - '0']++;
			else
				chars[s[i] - 'A']++;

		}
		for (int i = 0; i < 30; i++) {
			if (chars[i] != 0)
				res.push_back(chars[i]);
			if (nums[i] != 0)
				res.push_back(nums[i]);
		}
		sort(res.rbegin(), res.rend());
		int c = 0;
		for (int i = 0; i < res.size(); i++){
//			cout<<res[i]<<" "<<v[i]<<endl;
			c += (res[i] * v[i]);
		}
		cout<<c<<endl;

	}
	return 0;
}
