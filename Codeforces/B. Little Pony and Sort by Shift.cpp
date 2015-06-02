#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;cin>>n;
vector<int>v(n);
bool check=1;
int ret=0,idx;
for(int i=0;i<n;i++){
	cin>>v[i];
	if(i){
		if(v[i]<v[i-1])
			ret++,idx=i;

	}
}
if(ret==0)
	cout<<0<<endl;
else
	if(ret>1)
		cout<<-1<<endl;
	else if(v[n-1]<=v[0])
		cout<<n-idx<<endl;
		else
			cout<<-1<<endl;
	return 0;
}
