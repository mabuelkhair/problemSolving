#include<bits/stdc++.h>
using namespace std;
int main()
{
	double EPS=1e-7;
	bool arr[4009];
	int n,t; cin>>n>>t;
	vector<pair<double,double> >v;
	while(n--)
	{
		int x,side;
		cin>>x>>side;
		double st=x-(1.0*side/2);
		double ed=x+(1.0*side/2);
//		cout<<st<<" "<<ed<<endl;
		v.push_back(make_pair(st,ed));
	}
	sort(v.begin(),v.end());
	int res=2;
	for(int i=0;i<v.size()-1;i++)
	{
		double diff=v[i+1].first-v[i].second;
//		cout<<diff-t<<endl;
		if(diff-t>EPS)
			res+=2;
		if(diff-t<0.0)
			continue;
		if(diff-t==0.0)
			res++;


	}
	cout<<res<<endl;


	return 0;

}
