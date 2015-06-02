#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	if (n >= 8 && n % 2 == 0) {

		cout<<"YES\n";
		int ret = 0;
		for (int i = 0; i < n - 1; i += 2) {
			if (i == 2 || i == 7)
				i++;
			ret++;
			cout << i + 2 << " - " << i + 1 << " = 1" << endl;
		}
	for(int j=0;j<ret-1;j++)
	{
		cout<<"1 * 1 = 1\n";
	}
	cout<<"8 * 3 = 24\n";
	cout<<"24 * 1 = 24\n";

	}
	else
		if(n>8&&n%2!=0)
		{
			int ret=0;
			cout<<"YES\n";
			cout<<"3 - 2 = 1\n";
			cout<<"9 - 8 = 1\n";
			cout<<"7 - 5 = 2\n";
			cout<<"2 - 1 = 1\n";
			cout<<"4 * 6 = 24\n";
			cout<<"24 * 1 = 24\n";
			cout<<"24 * 1 = 24\n";
			cout<<"24 * 1 = 24\n";

			for (int i = 10; i <= n; i += 2) {
					cout<<i+1<<" - "<<i<<" = 1\n";
					cout<<"24 * 1 = 24\n";
					}
		}
		else if(n<4)
			cout<<"NO\n";
		else if(n==4)
		{

			cout<<"YES\n";
			cout<<"3 * 4 = 12\n";
			cout<<"2 * 12 = 24\n";
			cout<<"24 * 1 = 24\n";
		}
		else if(n==5)
		{

			cout<<"YES\n";
			cout<<"4 * 5 = 20\n";
			cout<<"2 - 1 = 1\n";
			cout<<"3 + 1 = 4\n";
			cout<<"4 + 20 = 24\n";
		}
		else if(n==6)
		{

			cout<<"YES\n";
			cout<<"6 * 5 = 30\n";
			cout<<"30 - 4 = 26\n";
			cout<<"3 - 2 = 1\n";
			cout<<"26 - 1 = 25\n";
			cout<<"25 - 1 = 24\n";
		}
		else if(n==7)
		{

			cout<<"YES\n";
			cout<<"5 * 6 = 30\n";
			cout<<"30 - 7 = 23\n";
			cout<<"4 - 3 = 1\n";
			cout<<"2 - 1 = 1\n";
			cout<<"1 * 1 = 1\n";
			cout<<"23 + 1 = 24\n";
		}
	return 0;
}
