#include<bits/stdc++.h>
using namespace std;
int main() {
int n; cin>>n;
vector<int>v(n);
int res=0;
int ret=0;
for(int i=0;i<n;i++)
{
	cin>>v[i];
	if(i)
		res+=(v[i-1]-v[i]);
	if(res<0)
		ret+=abs(res),res=0;
}
ret+=v[0];
cout<<ret<<endl;

	return 0;
}
