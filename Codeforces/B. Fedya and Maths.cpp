#include<bits/stdc++.h>
using namespace std;
int main()
{
string s; cin>>s;
int n=0;
int sz=s.size()-1;
if(sz==0)
	n=s[0]-'0';
else
 n+=s[sz-1]-'0', n*=10, n+=s[sz]-'0';
if(n%4==0)
	cout<<4<<endl;
else
	cout<<0<<endl;

	return 0;
}
