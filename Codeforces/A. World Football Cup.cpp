#include<bits/stdc++.h>
using namespace std;
struct team{
	string name;
	int points=0;
	int scored=0;
	int missed=0;
	int diff;
};
bool cmp(team a,team b)
{
	if(a.points>b.points)
		return 1;
	if(b.points>a.points)
		return 0;
	if(a.points==b.points)
	{
		if(a.diff>b.diff)
			return 1;
		if(b.diff>a.diff)
			return 0;
		if(b.diff==a.diff)
		{
			if(a.scored>b.scored)
					return 1;
				if(b.scored>a.scored)
					return 0;
		}
	}
}
int main()
{
	int n; cin>>n;
	map<string,team>m;
	for(int z=0;z<n;z++)
	{
		string str; cin>>str;
		team obj;
		obj.name=str;
		m.insert({str,obj});
	}
	int numOfMatches=(n*(n-1))/2;
	for(int z=0;z<numOfMatches;z++)
	{
		string team1="",team2="";
		string str; cin>>str;
		stringstream  ss(str);
		bool b=1;
		string t2sem;
		while(getline(ss,t2sem,'-')){
				if(b)
					team1=t2sem;
				else
					team2=t2sem;
				b=0;
		    }
		int t1,t2;
		char c;
		cin>>t1>>c>>t2;
		if(t1>t2)
			m[team1].points+=3;
		else
			if(t1==t2)
				m[team1].points+=1,m[team2].points+=1;
			else
				m[team2].points+=3;
		m[team1].scored+=t1;
		m[team2].scored+=t2;
		m[team1].missed+=t2;
		m[team2].missed+=t1;

	}
	map<string,team>::iterator it;
	vector<team>v;
	for(it=m.begin();it!=m.end();it++){
		it->second.diff=it->second.scored-it->second.missed;
		v.push_back(it->second);
	}
	sort(v.begin(),v.end(),cmp);
	vector<string>res;
	for(int i=0;i<n/2;i++)
		res.push_back(v[i].name);
	sort(res.begin(),res.end());
	for(int i=0;i<n/2;i++)
			cout<<res[i]<<endl;

	return 0;
}
