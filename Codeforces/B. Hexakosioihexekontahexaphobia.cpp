#include<bits/stdc++.h>
using namespace std;
int main()
{
string s,cmp="666"; cin>>s;
for(int i=0;i<s.length();i++)
 if(s.substr(i,3)==cmp)
	return cout<<"YES\n",0;

cout<<"NO\n";
	return 0;
}
