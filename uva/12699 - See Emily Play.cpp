#include<bits/stdc++.h>
using namespace std;
double memo[1000002];
int vis[1000002];
int c=1;
int n, d, s, a;
double solve(int n) {
	if (n <=1)
		return 0;
	if (vis[n]==c){
//		cout<<"here";
		return memo[n];
	}

	vis[n]=c;
	double &result = memo[n];
	result=0;
	if (n % 2 == 0) {
		result += solve(n / 2)+d;
		n /= 2;
	} else

	{
		result += solve(n + 1) +a;
		result += solve(n - 1) +s;
		result/=2.0;
	}
	return  result;
}
int main() {
	int T;
	cin >> T;
	memset(vis,0,sizeof(vis));
	while (T--) {
		cin >> n >> d >> s >> a;
//		cout<<solve(n)<<endl;
		printf("%.3lf\n",solve(n)+a+d+s);
		c++;

	}
	return 0;
}
