#include<bits/stdc++.h>
using namespace std;
int main() {
	int T = 0;
	cin >> T;
	while (T--) {
		int x = 0, y = 0, r = 0;
		scanf("%d %d %d", &x, &y, &r);
		double dist = sqrt(x * x + y * y);
		printf("%.2f %.2f\n", r - dist, r + dist);
	}
	return 0;
}
