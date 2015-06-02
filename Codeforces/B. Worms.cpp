#include<bits/stdc++.h>
using namespace std;
vector<pair<int, int> > v;

int bs(int x)
{
	int st=0, lst=v.size();
	while(st<lst)
	{
		int mid=(st+lst)/2;
		if(v[mid].first<=x&&v[mid].second>=x)
	return mid;
		if(v[mid].first>x)
			lst=mid;
		else
			if(v[mid].second<x)
				st=mid+1;
	}
	return -1;
}
int main() {
	int n;
	cin >> n;
	v.resize(n);
	int x;
	cin >> x;
	v[0]= {1,x};
	for (int i = 1; i < n; i++) {
		int a;
		cin >> a;

		v[i]= {x+1,x+a};
		x += a;
	}

	int m;
	cin >> m;
	for(int i=0;i<m;i++)
	{
		int a; cin>>a;
		 cout<<bs(a)+1<<endl;

	}
	return 0;
}
