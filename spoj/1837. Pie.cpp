#include<bits/stdc++.h>
using namespace std;
double const EPS=1e-6;
int const OO=1e9;
int n,f;
vector<double>v;
bool valid(double sz)
{
	int c=0;
	for(int i=0;i<v.size();i++)
		c+=v[i]/sz;
	if(c>=f)
		return 1;
	return 0;
}
double res=0;
void binarySearch()
{
	double start=0,end=100000009*M_PI;
	while(end-start>=EPS)
	{
		double mid = (start+end)/2.0;

		if(valid(mid))
		{
			start=mid;
			res=max(res,mid);
		}
		else
		{
			end=mid;
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		res=0;
		scanf("%d%d",&n,&f);
		v.clear();
		v.resize(n);
		f++;
		for(int i=0;i<n;i++)
		{
			int a; scanf("%d",&a);
			v[i]=(a*a*M_PI);
		}
		binarySearch();
		printf("%.4lf\n",res);
	}
	return 0;
}
