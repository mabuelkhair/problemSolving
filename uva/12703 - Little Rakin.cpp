#include<bits/stdc++.h>
using namespace std;
vector<string> memo(41);
long long n, a, b;
int aN[41][2];
int aM[41][2];
void solve(long long n) {
	aN[0][0] = 1;
	aN[0][1] = 0;

	aN[1][0] = 0;
	aN[1][1] = 1;

	for (int i = 2; i <= n; i++) {

		aN[i][0] = aN[i - 1][0] + aN[i - 2][0];
		aN[i][1] = aN[i - 1][1] + aN[i - 2][1];
	}

}

void solve2(int n) {
	pair<int, int> av(1, 0);
	pair<int, int> bv(0, 1);

	while (--n) {
		pair<int, int> result(av.first + bv.first, av.second + bv.second);
		av = bv;
		bv = result;
	}
	cout << bv.first << " " << bv.second << endl;
}
int arrA[1001], arrB[1001];
int res[1001];
void primeFactors(long long n, int *a) {
	while (n % 2 == 0) {
		a[2]++;
		n /= 2;
	}

	for (int i = 3; i * i <= n; i += 2) {
		while (n % i == 0) {
			a[i]++;
			n /= i;
		}
	}
	if (n > 2)
		a[n]++;
}
int main() {
	int T;
//	cin >> T;
//	while (T--)
	freopen("stress2.txt", "w", stdout);
	{
		memset(arrA, 0, sizeof(arrA));
		memset(arrB, 0, sizeof(arrB));
		memset(res, 0, sizeof(res));

//		cin >> n >> a >> b;
		for (n = 2; n <= 40; n++) {

			for (a = 2; a <= 14; a++) {
				for (b= 2; b <= 14; b++) {
					primeFactors(a, arrA);
					primeFactors(b, arrB);
					solve(n);
					int aC = aN[n][0], bC = aN[n][1];
					cout<<n<<" "<<a<<" "<<b<<endl;
//					cout << aC << " " << bC << " " << endl;
//					solve2(n);
					for (int i = 0; i < 1001; i++) {
						res[i] = arrA[i] * aC + arrB[i] * bC;
						if (res[i] != 0)
							cout << i << " " << res[i] << endl;

					}

					puts("");

				}
			}
		}
	}
	return 0;
}
