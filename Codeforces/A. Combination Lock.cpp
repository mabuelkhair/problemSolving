#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, steps = 0;
	cin >> n;
	string original, combination;
	cin >> original >> combination;
	for (int i = 0; i < n; i++) {
		char mn = min(original[i], combination[i]), mx = max(original[i],
				combination[i]);
		steps += min((mx - mn), '9' - mx + (mn - '0' + 1));
	}
	cout << steps << endl;
	return 0;
}
