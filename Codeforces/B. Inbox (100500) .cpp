#include<bits/stdc++.h>
using namespace std;
int moveToNextUnread(int idx,vector<int>&v)
{
	for(int i=idx+1;i<v.size();i++)
	{
		if(v[i]==1)
			return i;
	}
	return -1;
}
int main()
{
	int n; cin>>n;
	vector<int>v(n);
	int ret=0;
	for(int i=0;i<n;i++)
		cin>>v[i];

	int res=moveToNextUnread(-1,v);
	int i=moveToNextUnread(-1,v);
	while(res!=-1)
	{
//		cout<<res<<" "<<i<<endl;


		if(res!=-1){
//			cout<<i<<" "<<i<<endl;
			if(abs(res-i)>1){
				ret++;
			}
		}
//		cout<<ret<<endl;
		i=res;
		ret++;
		res=moveToNextUnread(i,v);
	}
	cout<<ret<<endl;
	return 0;
}
