#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	if(n==2)
		return cout<<abs(v[0]-v[1])<<" "<<1<<endl,0;
	sort(v.begin(),v.end());
	long long a=0,b=0;

	if(v[0]==v[n-1]){
		long long out=(long long )n * (long long) (n-1);
		out/=2;
	return cout<<(v[n-1]-v[0])<<" "<<out<<endl,0;
	}
	for(int i=0;i<v.size();i++){
		if(v[i]==v[0])a++;
		else
		break;}
	for(int i=v.size()-1;i>=0;i--){
		if(v[i]==v[n-1])b++;
		else
			break;}
	cout<<(v[n-1]-v[0])<<" "<<(a*b)<<endl;
	return 0;
}
