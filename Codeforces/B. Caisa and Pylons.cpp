#include<bits/stdc++.h>
using namespace std;

vector<int>v;
bool isValid(int n){
	n-=v[0];
	if(n<0)
		return 0;
	for(int i=1;i<v.size();i++)
	{
		n+=(v[i-1]-v[i]);
			if(n<0)
				return 0;
	}
	return 1;

}
int bs()
{
int s=0; int ed=1000000000;
int res=0;
	while(s<ed)
{
	int mid=(s+ed)/2;
//	cout<<s<<" "<<ed<<endl;
	if(isValid(mid))
		res=mid,ed=mid;
	else{
		s=mid+1;
	}
}
return res;
}
int main() {
int n; cin>>n;
v.resize(n);
int ret=0;
for(int i=0;i<n;i++)
{
	cin>>v[i];
}
cout<<bs()<<endl;
	return 0;
}
