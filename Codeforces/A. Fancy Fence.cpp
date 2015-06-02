#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin>>n;
	while(n--)
	{
		int a; cin>>a;
		int b=180-a;
		if(360%b==0&&360/b>=3)
			puts("YES");
		else
			puts("NO");
	}
	return 0;
}
