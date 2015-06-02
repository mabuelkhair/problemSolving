#include<bits/stdc++.h>
using namespace std;
long long m_w, m_z;
int get_random() {
	m_z = 36969 * (m_z & 65535) + (m_z >> 16);
	m_w = 18000 * (m_w & 65535) + (m_w >> 16);
	long long res = (m_z << 16) + m_w;
	return res % 1000000000;
}
int main() {
	int T;
	cin >> T;
	while (T--) {
		int n, k;
		cin >> n >> k >> m_w >> m_z;
		vector<int> dq(n);
		for (int i = 0; i < n; i++) {
			dq[i] = get_random();
		}

		nth_element(dq.begin(), dq.begin() + k - 1, dq.end());
		cout << dq[k - 1] << endl;
	}

	return 0;
}
