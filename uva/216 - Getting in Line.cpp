#include<bits/stdc++.h>
using namespace std;
vector<pair<int, int> > v;
vector<bool> vis;
double mn = 200000.0;
int n;
double EPS = 1e-6;
vector<pair<int, int> > path;
vector<pair<int, int> > generator;
void solve(int idx, double sum, int num) {

	if (num == n - 1) {
		for(int i=1;i<n;i++)
		if (sum - mn < EPS)
			mn = sum,path=generator;

		return;
	}
	for (int i = 0; i < n; i++) {
		if (!vis[i]) {
			double dist = hypot(v[idx].first - v[i].first,
					v[idx].second - v[i].second);
			vis[i] = 1;
			generator[num+1]=v[i];
			solve(i, sum + dist + 16, num + 1);
			vis[i] = 0;

		}

	}
}
int main() {
	int counter = 0;
	while (cin >> n && n) {
		counter++;
		v.clear();
		v.resize(n);
		vis.clear();
		vis.resize(n);
		generator.clear();
		generator.resize(n);
		mn = 200000.0;
		for (int i = 0; i < n; i++)
			cin >> v[i].first >> v[i].second, v[i];
		sort(v.begin(), v.end());

		for(int i=0;i<n;i++){
			vis.clear();
			vis.resize(n);

			vis[i] = 1;
			generator[0]=v[i];
			solve(i, 0, 0);
			vis[i]=0;

		}
		puts("**********************************************************");

		printf("Network #%d\n", counter);

		for(int i=0;i<path.size()-1;i++)
		{
			printf("Cable requirement to connect (%d,%d) to (%d,%d) is %.2lf feet.\n",path[i].first,path[i].second,path[i+1].first,path[i+1].second, hypot(path[i+1].first - path[i].first,
					path[i].second - path[i+1].second)+16.0);
		}


		printf("Number of feet of cable required is %.2lf.\n", mn);
	}
	return 0;
}
